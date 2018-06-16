#principio de contagem
def pegarinfo(sla, lugar):
    var = input(sla).lower()
    while var == '':
        print("Opção inválida, tente novamente")
        print('-=' * 40)
        print('\n')
        var = input(sla)
    if lugar == 1:
        while var not in '012' or var == '':
            print("Opção inválida, tente novamente")
            print('-=' * 40)
            print('\n')
            var = input(sla)
    else:
        var = var[0]
        while var not in 'sn' or var == '':
            print("Opção inválida, tente novamente")
            print('-=' * 40)
            print('\n')
            var = input(sla)

    return var

listinha = []
def validar(textinho):
    var = input(textinho)
    for c in range(0, 201):
        listinha.append(str(c))
    try:
        if var not in listinha or var == '':
            print('Digite um número de número entre 1 e 200')
            var = int(input(textinho))


    except ValueError:
        print('Digite um número de número entre 1 e 200')
        var = int(input(textinho))

    return var

def explicarhipotese():
    print('-=' * 40)
    print('''A hipótese é quando devemos escolher uma coisa OU outra.
    Por exemplo:
    Eu vou tomar sorvete OU açaí?
    Suco de manga OU abacaxi?

    nesses casos, nós escolhemos um OU outro, nunca os dois.
    Para saber as possibilidades, nós fazemos uma soma.
    Exemplo:
    três sabores de sorvete:
    S1, S2, S3
    dois tipos de açaí:
    A1, A2

    Então:
    sorvete = 3
    Açaí = 2

    2 + 3 = 5
    são 5 possibilidades de escolha''')
    print('-=' * 40)

def explicaretapa():
    print('-=' * 40)
    print('''Na etapa, nós podemos escolher mais de uma coisa.
Exemplo:
Uma mulher, na hora de se vestir tinha as seguintes opções:
3 calças:
C1, C2, C3
4 camisetas:
C1, C2, C3, C4
2 tenis:
T1, T2

De quantaas maneiras diferentes ela pode se vestir?
Nesse caso, a mulher utilizará uma calça E uma camisa E um tênis.
Na hipótese, era apenas um ou outro. Aqui, temos uma combinação de elementos.
Nesse caso, para sabermos a quantidade de combinações, devemos multiplicar.
Então:
- calças ....... 3
- camisetas ...x 4   
- tênis .......x 2
             ------
               24

Então são 24 opções diferentes.''')
    print('-=' * 40)


def naosabe():
    escolha = pegarinfo('''\n[ 1 ] Hipótese\n[ 2 ] Etapa\nEscolha uma opção acima: ''', 1)
    if escolha == '1':
        explicarhipotese()

    if escolha == '2':
        explicaretapa()

saber = pegarinfo('Você já sabe o que é hipótese e etapa? [S][N] ', 2)

if saber == 'n':
    naosabe()
    explicar = pegarinfo('Deseja ver mais alguma explicação? ', 2)
    if explicar == 's':
        naosabe()
    else:
        print('-=' * 40)
        print('\n')

continuar = ''
while continuar != 'n':
    opc = pegarinfo('''
[ 0 ] Sair
[ 1 ] Hipótese
[ 2 ] Etapas  ''', 1)
    result = 1
    if opc == '1':
        qtd = validar('\nSão quantas opções? (MAX 200)')
        for c in range(0, int(qtd)):
            result += int(validar(f"\nDigite a quantidade de possibilidades da {c+1}ª opção: (MAX 200)"))
        print(f"\nA quantidade de possibilidades é {result-1}")
        print('-=' * 40)
    elif opc == '2':
        qtd = int(input('\nSão quantas opções? '))
        for c in range(0, int(qtd)):
            result *= int(validar(f"\nDigite a quantidade de possibilidades da {c+1}ª opção: (MAX 200)"))
        print(f"\n\nA quantidade de possibilidades é {result}")
        print('-=' * 40)
    else:
        break

#By Danny