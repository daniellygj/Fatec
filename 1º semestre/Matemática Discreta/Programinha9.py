from TheDoctor import imprimir
from console import readsite


def namatriz(matriz):
    print('\nNa matriz:')
    for c in matriz:
        print(c)
    print('\n')


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

print("Fecho Simetrico")
while opc == 's':
    qtd = input('Quantas relações deseja adicionar? (MAX 10)')
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

        while relacoes[c][0] not in '123' and relacoes[c][1] not in '123':
            print('Utilize apenas os números 1, 2, 3 e 4. Digite novamente.')
            relacoes[c] = (input(f'{c+1}º '))


    matriz = [[0, 0, 0],
              [0, 0, 0],
              [0, 0, 0]]


    for c2 in relacoes:
        matriz[int(c2[:1])-1][int(c2[2:])-1] = 1



    if matriz[0][1] == matriz[1][0] and matriz[0][2] == matriz[2][0] and matriz[1][2] == matriz[2][1]:
        print('A relação digitada já é simetrica, então o fecho é a própria relação')
    else:
        for c in range(0, 3):
            for c2 in range(0, 3):
                if matriz[c][c2] != matriz[c2][c]:
                    if matriz[c][c2] != 1:
                        print(f'A relação({c+1};{c2+1}) foi adicionada.')
                        matriz[c][c2] = 1
                        x = f'{c+1};{c2+1}'
                        if x not in relacoes:
                            relacoes.append(x)
                    elif matriz[c2][c] != 1:
                        print(f'A relação({c2+1};{c+1}) foi adicionada.')
                        x = f'{c2+1};{c+1}'
                        if x not in relacoes:
                            relacoes.append(x)
                        matriz[c][c2] = 1
        print(f'O fecho simétrico da endorrelação é: {relacoes}')
        namatriz(matriz)

        opc = input('\nDeseja adicionar outra relação? ').lower()
        opc = opc[0]
        while opc not in 'ns':
            print("Opção inválida, tente novamente.")
            opc = input('Deseja adicionar outra relação? ').lower

#By Danny