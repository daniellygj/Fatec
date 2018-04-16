def funcional():
    print('=-' * 30)
    print('''A relação é funcional quando um da origem se relaciona com no maximo um do destino
    Na matriz pode ter no maximo um valor verdadeiro em cada linha 
    No grafo existe no máximo um arco partindo de cada nó''')
    print('=-' * 30)
    input('\nPRESSIONE ENTER PARA CONTINUAR\n')

def injetora():
    print('=-' * 30)
    print('''A relação é injetora quando um elemento da origem se relaciona com no maximo um do destino
    Na matriz pode ter no maximo um valor verdadeiro em cada coluna.
    No grafo existe no maximo um arco chegando em cada nó.''')
    print('=-' * 30)
    input('\nPRESSIONE ENTER PARA CONTINUAR\n')

def total():
    print('=-' * 30)
    print('''Na relação total, cada elemento da origem A está associado a “pelo menos” um elemento de B
    Na Matriz há pelo menos um valor lógico verdadeiro por linha.''')
    print('=-' * 30)
    input('\nPRESSIONE ENTER PARA CONTINUAR\n')

def sobrejetora():
    print('=-' * 30)
    print('''Na relação sobrejetora, em uma relação R, cada elemento do destino B esta associado a pelo menos um elemento na origem A
    Na matriz, há pelo-menos um valor lógico verdadeiro para coluna.    ''')
    print('=-' * 30)
    input('\nPRESSIONE ENTER PARA CONTINUAR\n')

def escolher():
    resp = input('''o que deseja aprender hoje?'
    [ 0 ] Sair
    [ 1 ] Relação Funcional
    [ 2 ] Relação Injetora
    [ 3 ] Relação Total
    [ 4 ] Relação Sobrejetora ''')

    try:
        temp = (int(resp))
        if temp not in (0, 1, 2, 3, 4):
            print('Opção inválida, tente novamente')
            print('=-' * 30)
            temp = escolher()
    except ValueError:
        print('Opção inválida, tente novamente.')
        print('=-' * 30)
        temp = escolher()
    return(temp)

print('tipos de relações')

opcao = 1
while opcao != 0:
    opcao = escolher()

    if opcao == 1:
        funcional()
    elif opcao == 2:
        injetora()
    elif opcao == 3:
        total()
    elif opcao == 4:
        sobrejetora()
