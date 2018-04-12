def resposta(a, b):
    return a in b


def explicar():
    print('=-' * 30)
    print('Então vamos começar pelos conceitos básicos!\n')
    input('APERTE ENTER PARA CONTINUAR\n')
    print(''' Conjunto é uma estrutura que agrupa objetos e constitui uma base para construir estruturas mais complexas.
    Então, Simplificando, é uma coleção, sem repetições e sem qualquer ordenação, de objetos chamados elementos.\n''')
    input('APERTE ENTER PARA CONTINUAR\n')
    print('''O termo 'elemento' é usado de forma ampla, e pode designar um objeto concreto ou abstrato.''')
    print('Recaptulando: um conjunto é uma coleção de zero ou mais objetos distintos, não ordenados, que são chamados de elementos do conjunto\n')
    input('APERTE ENTER PARA CONTINUAR\n')
    print('''Então, por exemplo, o conjunto de vogais tem os elementos A, E, I, O, U
    então:
    vogais = {A, E, I, O, U}
    o conjunto semana:
    semana = {seg, ter, qua, qui, sex, sab, dom}\n ''')
    input('APERTE ENTER PARA CONTINUAR\n')
    print('''Um outro modelo de escrita é:
    { x | x = y² sendo que y é um número inteiro}
    Isso corresponde ao conjunto {0, 1, 4, 9, 16,...} \n''')
    input('APERTE ENTER PARA CONTINUAR\n')
    print('=-' * 30)

def pertinencia():
    print('=-' * 30)
    print('Você escolheu pertinência.')
    print('''Se um elemento a é elemento de um conjunto A:
    Semântica: a pertence ao conjunto A''')
    print('''Caso contrário, afirma-se que a não pertence ao conjunto A: 
    Semântica: a não pertence ao conjunto A''')
    print('''Então, tendo o conjunto Vogais = {a, e, i, o, u}, tem se que
    a pertence vogais
    h pertence vogais ''')
    print('=-' * 30)

def uniao():
    print('=-' * 30)
    print('Você escolheu união.')
    print('''A união(reunião) entre os elementos de dois ou mais conjuntos, é a junção dos dois, sem repetir os elementos..
    A = {1, 2, 3, b, 4}
    B = {1, 2, 3, a, b, c}
    A união B = {1, 2, 3, 4, a, b, c}''')
    print('=-' * 30)

def interseccao():
    print('=-' * 30)
    print('Você escolheu intersecção.')
    print('''A intersecção é um conjunto de elementos que, simultaneamente, pertencem a dois ou mais conjuntos.
    A = {1, 2, 3, 4, 5}
    B = {2, 4, 6, 8}
    A intersecção B = {2, 4}''')
    print('=-' * 30)

def continencia():
    print('=-' * 30)
    print('você escolheu continência')
    print('''A continência só existe se todos elementos de A existirem em B.
    Podem ter elementos de B que não existem em A, mas não podem existir elementos de A que não existem em B
    A = {1, 2, 3}
    B = {1, 2, 3, 4, 5}
    então podemos dizer que A está contido em B ''')
    print('=-' * 30)
def escolha():
    x = input('''Por onde deseja começar?
    [ 0 ] Sair
    [ 1 ] União
    [ 2 ] Intersecção  
    [ 3 ] Pertinência
    [ 4 ] Continência ''')
    try:
        c = (int(x))
        if c not in (0, 1, 2, 3, 4):
            print('Opção inválida, tente novamente')
            print('=-' * 30)
            c = escolha()
    except ValueError:
        print('Opção inválida, tente novamente.')
        print('=-' * 30)
        c = escolha()
    return(c)

opcao = 0

def perguntar():
    x = input('Você sabe o que é a teoria dos conjuntos?').upper()
    try:
        xxx = (str(x))
        if xxx not in 'NAOSIM':
            print('Opção inválida, tente novamente.')
            print('=-' * 30)
            xxx = perguntar()

    except ValueError:
        print('opção inválida, tente novamente.')
        print('=-' * 30)
        xxx = perguntar()
    return xxx



print('Olá! Estou aqui para te auxiliar no seu aprendizado!')

resp1 = perguntar()
resp = resp1[0]
if resposta('N', resp):
    explicar()


opc = 1

while opc in (1, 2, 3, 4):
    opc = escolha()
    if opc == 1:
        uniao()

    elif opc == 2:
        interseccao()

    elif opc == 3:
        pertinencia()

    elif opc == 4:
        continencia()
