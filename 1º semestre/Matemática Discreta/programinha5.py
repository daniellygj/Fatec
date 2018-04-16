def monomorfismo(): #função que explica o que é monomorfismo
    print('-=' * 30)
    print('''Seja R: A -> B uma relação. 
    Para R ser uma monorelação, é preciso satisfazer simultaneamente:
    => Relação Total (Pelo menos uma por linha) 
    => Relação Injetora (No máximo uma por linha)''')
    print('-=' * 30)
    input('\n APERTE ENTER PARA CONTINUAR \n')

def epimorfismo(): #função que explica o que é epimorfismo
    print('-=' * 30)
    print('''Seja R : A -> B uma relação. 
    Para que R seja uma epirrelação é preciso que seja simultaneamente:
    => Relação Sobrejetora (Pelo menos um valor lógico verdadeiro por coluna) 
    => Relação Funcional (Mínimo um valor verdadeiro por linha)
    ''')
    print('-=' * 30)
    input('\n APERTE ENTER PARA CONTINUAR \n')

def isomorfismo(): #função que explica o que é isomorfismo
    print('-=' * 30)
    print('''Seja R: A -> B uma relação.
    Para R ser uma relação isomórfica, é preciso satisfazer simultaneamente:
    => Relação Total
    => Relação Sobrejetora
    => Relação Funcional
    => Relação Injetora
    ''')
    print('-=' * 30)
    input('\n APERTE ENTER PARA CONTINUAR \n')

def endorrelacao(): #função que explica o que é endorrelação
    print('-=' * 30)
    print('''Uma endorrelação é uma relação binária interna de um conjunto (dança do passarinho). Também pode ser chamada “autorrelação”
    PROPRIEDADES DE UMA ENDORRELAÇÃO
    REFLEXIVA > É uma propriedade na qual todo elemento do conjunto relaciona-se consigo mesmo.
            -> Na matriz, a diagonal principal só apresenta valores lógicos verdadeiros.
            -> No grafo, qualquer nodo possui arco (ou aresta) com origem e destino nele mesmo.
    IRREFLEXIVA > 
            -> Na matriz, diagonal principal da matriz só apresenta valores lógicos falso
            -> No grafo: Não tem dança do passarinho.   ''')
    print('-=' * 30)
    input('\n APERTE ENTER PARA CONTINUAR \n')

def simetrica(): #função que explica o que é relação simetrica
    print('-=' * 30)
    print('''Seja A um conjunto e R uma endorrelação em A. R será simétrica se:
    -> Na matriz a metade acima da diagonal principal é igual a metade de baixo, célula a célula;
    -> No grafo entre dois nodos não há nenhuma seta, ou há duas setas que os ligam.    ''')
    print('-=' * 30)
    input('\n APERTE ENTER PARA CONTINUAR \n')

def assimetrica(): #função que explica o que é relação assimetrica
    print('-=' * 30)
    print('''Seja A um conjunto e R uma endorrelação em A. R será assimétrica se:
    -> Na matriz a metade aciam da diagonal principal é diferente da metade de baixo, célula a célula;
    -> No grafo entre 2 nodos há no máximo uma seta.
    ''')
    print('-=' * 30)
    input('\n APERTE ENTER PARA CONTINUAR \n')

def transitiva(): #função que explica o que é relação transitiva
    print('-=' * 30)
    print(''' Seja A um conjunto e R uma endorrelação em A. R será transitiva se:
    ->No grafo há a ideia de triangularidade entre 3 nodos, tal qual noção de vetor resultante.   ''')
    print('-=' * 30)
    input('\n APERTE ENTER PARA CONTINUAR \n')

def opcao(): #lê o que o usuario digita
    opc = input('''Escolha uma opção:
    [ 0 ] Sair
    [ 1 ] Monomorfismo
    [ 2 ] Epimorfismo
    [ 3 ] Isomorfismo
    [ 4 ] Endorrelação 
    [ 5 ] Relação simetrica
    [ 6 ] Relação assimetrica
    [ 7 ] Relação transativa''')

    try:  #teste se o que o usuario digitou e valido
        temp = (int(opc))
        if temp not in(0, 1, 2, 3, 4, 5, 6, 7):
            print('Opção inválida, tente novamente')
            print('-=' * 30)
            temp = opcao()
    except ValueError:
        print('Opção inválida, tente novamente')
        print('-=' * 30)
        temp = opcao()
    return (temp)


opc = 1
while opc != 0:  #explica de acordo com o que o usuario desejar saber
    opc = opcao()
    if opc == 1:
        monomorfismo()

    elif opc == 2:
        epimorfismo()

    elif opc == 3:
        isomorfismo()

    elif opc == 4:
        endorrelacao()

    elif opc == 5:
        simetrica()

    elif opc == 6:
        assimetrica()

    elif opc == 7:
        transitiva()
#By Danny