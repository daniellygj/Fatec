import socket
import rsa
from threading import Thread

global public_key
global private_key


def get_private_key():
    arq = open('Person2/.chavePri.txt', 'rb')
    private_key = bytes()
    for linha in arq:
        private_key += linha
    arq.close()
    return private_key


def decifrar_message(msgc):
    private_key = get_private_key()
    return rsa.decrypt(
        msgc, rsa.PrivateKey.load_pkcs1(private_key, format='PEM')
    )


def connection(con, cli):
    while True:
        msg = con.recv(1024)
        if b'-----BEGIN RSA PUBLIC KEY-----' in msg:
            public_key = msg
        else:
            print(decifrar_message(msg))
        if not msg:
            break

    print('Finalizando conexao do cliente', cli)
    con.close()


def start_server():
    HOST = ''
    PORT = 5004

    tcp = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    orig = (HOST, PORT)

    get_private_key()
    tcp.bind(orig)
    tcp.listen(1)

    while True:
        con, cliente = tcp.accept()
        print('Concetado por ', cliente)
        t = Thread(target=connection, args=(con, cliente,))
        t.start()
