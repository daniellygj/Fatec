from console import readsite



def encontrarchave(entrada, x):
    inicio = x.find(entrada) + len(entrada)
    if entrada == 'MENU':
        inicio += 1
    linhas = x[inicio:]
    fim = linhas.find('\n\n')
    linhas = linhas[:fim]
    return linhas


def imprimir(nsei):
    for d in nsei.split('\n'):
        if d == '':
            continue
        elif d in'SPACE':
            print('\n')
        elif d in'SEP':
            print('=-' * 50)
        elif d in 'ENTER':
            input('\nAperte enter para continuar\n')
        else:
            print(d)


def montarmenu():
    menu = encontrarchave('MENU')
    aux = x.find('MENU') - 1
    imprimir(menu)
    escolher = input('Escolha uma das opções acima: ')

    for c in range(0, int(x[aux])+1):
        opcoes.append(str(c))

    while escolher not in opcoes:
        print("\nOpção inválida, tente novamente. ")
        print('-=' * 50)
        imprimir(menu)
        escolher = input('Escolha uma das opções acima: ')
    return escolher


def ifprintinline(line):
    if 'PRINT' in line:
        printf = encontrarchave('PRINT', x)
        imprimir(printf)
