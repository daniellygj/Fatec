def validaropc(opc):
    try:
        opc = opc.lower()

    except ValueError:
        print("Opção inválida, tente novamente.")
        print('=-' * 35)
        opc = input('\nDeseja adicionar outra relação? ')
        opc = validaropc(opc)

    while opc[0] not in 'sn':
        print("Opção inválida, tente novamente.")
        print('=-' * 35)
        opc = input('\nDeseja adicionar outra relação? ')
        opc = validaropc(opc)

    return opc[0]


def namatriz(matriz):
    print('\nNa matriz:')
    for c in matriz:
        for c2 in range(0, len(c)):
            print(c[c2], end=' ')
            if c2 == len(matriz) - 1:
                print(end='\n')


def validarint(var):
    try:
        var = int(var)

    except ValueError:
        print('Informação inválida, tente novamente.')
        print('=-' * 30)
        var = input('\nQuantas relações deseja adicionar? ')
        var = validarint(var)

    return var


def validarelem(var):
    while ';' not in var or var.count(';') > 1:
        print('Utilize apenas um ; para separar os elementos. Exemplo: 2;5')
        print('=-' * 30)
        var = (input(f'\n{c+1}º '))
        var = validarelem(var)

    while var[:var.find(';')] not in lista or var[var.find(';') + 1:] not in lista:
        print(f'\nUtilize apenas números de {lista[0]} a {lista[-1]}. Digite novamente.')
        print('=-' * 30)
        var = (input(f'{c+1}º '))
        var = validarelem(var)
    return var


def criarmatriz(qtd):
    matriz = []
    for c in range(qtd):
        matriz.append([])
    return matriz


opc = 's'
lista = []
print("Fecho simétrico\n")

while opc == 's':
    qtd = input('Quantas relações deseja adicionar? ')
    qtd = validarint(qtd)
    matriz = criarmatriz(qtd)
    for c in range(0, qtd):
        lista.append(str(c + 1))
        for c2 in range(0, qtd):
            matriz[c].append(0)

    print("Entre com a relação")

    relacoes = []
    relacoesdigitadas = []

    for c in range(0, qtd):
        temp = input(f'{c+1}º ')
        temp = validarelem(temp)
        if temp not in relacoesdigitadas:
            relacoesdigitadas.append(temp)
        while temp in relacoes:
            print('Relação já adicionada. Entre com outra')
            print('=-' * 30)
            print('\n')
            temp = input(f'{c+1}º ')
            validarelem(temp)
            if temp not in relacoesdigitadas:
                relacoesdigitadas.append(temp)
            if temp not in relacoes:
                break
        relacoes.append(temp)

    if len(relacoes) > 1:
        for c2 in relacoes:
            aux = c2.find(';')
            matriz[int(c2[:aux]) - 1][int(c2[aux + 1:]) - 1] = 1

        aux1 = []
        aux = ''
        RD = ''

        for c in range(0, qtd):
            aux1.append(matriz[c][c])

        sim = True
        for c in range(0, len(matriz)):
            for c2 in range(c + 1, len(matriz)):
                m1 = matriz[c][c2]
                m2 = matriz[c2][c]
                if m1 != m2:
                    sim = False


        for c in range(0, len(relacoesdigitadas)):
            RD = RD + f'({relacoesdigitadas[c]})'
            if c != len(relacoesdigitadas) - 1:
                RD = RD + ';'

        if sim:
            print("\nA relação que você digitou já é simétrica, então o fecho é a própria relação.")
            print(f"Relação digitada: {RD}")

        else:
            print('\nA relação que você digitou não é simétrica.\n')
            for c in range(0, len(matriz)):
                for c2 in range(c+1, len(matriz)):
                    m1 = matriz[c][c2]
                    m2 = matriz[c2][c]

                    if m1 != m2:
                        if m1 != 1:
                            matriz[c][c2] = 1
                            if m1 not in relacoes:
                                print(f"A relação ({c+1};{c2+1}) foi adicionada.")
                                relacoes.append(f'{c+1};{c2+1}')
                            else:
                                print(f'A relação ({c+1};{c2+1}) seria adicionada, mas ela já existe.')

                        if m2 != 1:
                            matriz[c2][c] = 1
                            if m2 not in relacoes:
                                print(f"A relação ({c2+1};{c+1}) foi adicionada.")
                                relacoes.append(f'{c2+1};{c+1}')
                            else:
                                print(f'A relação ({c2+1};{c+1}) seria adicionada, mas ela já existe.')

            relacoes = sorted(relacoes)
            for c in range(0, len(relacoes)):
                aux = aux + f'({relacoes[c]})'
                if c != len(relacoes) - 1:
                    aux = aux + ';'

            print(f"\nRelação digitada: {RD}")
            print(f'O fecho reflexivo da endorrelação é: {aux}')
            namatriz(matriz)
    else:
        print("\nA relação que você digitou já é reflexiva, então o fecho é a própria relação.")
        print(f"Relação digitada: {relacoes[0]}")

    opc = input('\nDeseja adicionar outra relação? ').lower()
    opc = validaropc(opc)

# By Danny