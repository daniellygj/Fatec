import socket
import rsa

SERVER = '127.0.0.1'
arqnomepub = 'Person2/.chavePub.txt'
arq = open(arqnomepub, 'r')


def cifra_message(text, pub_key):
    return rsa.encrypt(
        text,
        rsa.PublicKey.load_pkcs1(pub_key, format='PEM')
    )


chave_publica = ''
for linha in arq:
    chave_publica += linha

arq.close()

PORT = 5004
tcp = socket.socket(socket.AF_INET,
                    socket.SOCK_STREAM)
dest = (SERVER, PORT)
tcp.connect(dest)
tcp.send(chave_publica.encode('ascii'))
print('Para sair use CTRL+X\n')
msg = input()
while msg != '\x18':
    tcp.send(
        cifra_message(msg.encode('ascii'), chave_publica)
    )
    msg = input()
tcp.close()
