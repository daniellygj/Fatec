from TheDoctor import imprimir
from console import readsite

imprimir(readsite('http://dontpad.com/TheDoctor/md/fechoreflexivo.txt'))

def namatriz(matriz):
    print('\nNa matriz:')
    for c in matriz:
        print(c)


def validacao(qtd):
    try:
        qtd = int(qtd)
        while qtd > 10:
            print('Digite um número menor que 10')
            qtd = input('Quantas relações deseja adicionar? (MAX 10)')
            validacao(qtd)
    except ValueError:
        print('Informação inválida, tente novamente.')
        qtd = qtd = input('Quantas relações deseja adicionar? (MAX 10)')
        validacao(qtd)
    return int(qtd)


opc = 's'

print("Fecho Reflexivo")
while opc == 's':
    while opc == 's':
        qtd = input('Quantas relações deseja adicionar?')
        qtd = validacao(qtd)
        print("Entre com a relação (Utilize apenas 1 2 e 3)")

        relacoes = []

        for c in range(0, qtd):
            temp = input(f'{c+1}º ')
            while temp in relacoes:
                print('Relação já adicionada. Entre com outra')
                temp = input(f'{c+1}º ')
                while temp not in '123':
                    print('Utilize apenas os números 1, 2, 3 e 4. Digite novamente.')
                    temp = (input(f'{c+1}º '))
                if temp not in relacoes:
                    break
            relacoes.append(temp)




    matriz = [[0, 0, 0],
              [0, 0, 0],
              [0, 0, 0]]


    for c2 in relacoes:
        matriz[int(c2[:1])-1][int(c2[2:])-1] = 1
        matriz[int(c2[:1]) - 1][int(c2[2:]) - 1] = 1



    if matriz[0][0] == 1 and matriz[1][1] == 1 and matriz[2][2] == 1:
        print("A relação que você digitou já é reflexiva, então o fecho é a própria relação")

    else:
        print('A relação que você digitou, não é reflexiva. O fecho reflexivo é: ')
        if matriz[0][0] != 1:
            matriz[0][0] = 1
            print("O termo (1;1) foi adicionado a relação.")
            relacoes.append('1;1')
        if matriz[1][1] != 1:
            matriz[1][1] = 1
            print("O termo (2;2) foi adicionado a relação.")
            relacoes.append('2;2')
        if matriz[2][2] != 1:
            matriz[2][2] = 1
            print("O termo (3;3) foi adidionado a relação.")
            relacoes.append('3;3')
        print(f'O fecho reflexivo da endorrelação é: {relacoes}')
        namatriz(matriz)

        opc = input('\nDeseja adicionar outra relação? ').lower()
        opc = opc[0]
        while opc not in 'ns':
            print("Opção inválida, tente novamente.")
            opc = input('Deseja adicionar outra relação? ').lower

#By Danny
