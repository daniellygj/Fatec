import socket
import rsa


def encrypt_message(text, pub_key):
    return rsa.encrypt(
        text,
        rsa.PublicKey.load_pkcs1(pub_key, format='PEM')
    )


def get_chave_pub():
    arqnomepub = 'Person2/.chavePub.txt'
    arq = open(arqnomepub, 'r')

    chave_publica = ''
    for linha in arq:
        chave_publica += linha

    arq.close()
    return chave_publica


def start_client():
    SERVER = '127.0.0.1'
    PORT = 5004
    public_key = get_chave_pub()
    get_chave_pub()
    tcp = socket.socket(socket.AF_INET,
                        socket.SOCK_STREAM)
    dest = (SERVER, PORT)

    tcp.connect(dest)
    tcp.send(public_key.encode('ascii'))

    print('Para sair use CTRL+X\n')
    msg = input()
    while msg != '\x18':
        tcp.send(
            encrypt_message(msg.encode('ascii'), public_key)
        )
        msg = input()

    tcp.close()
