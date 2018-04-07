from datetime import datetime
from time import sleep
now = datetime.now()

conjunto = set()
conjunto1 = set()
opcao = 1

nome = str(input('Qual o nome do primeiro conjunto? ')).upper()
qtd = int(input('Quantos elementos ele tem? '))
for c in range(1, qtd + 1):
    conjunto.add(str(input('{}º elemento: '.format(c))))
print('\n', '=-' * 20)

nome1 = str(input('\nQual o nome do segundo conjunto? ')).upper()
qtd1 = int(input('quantos elementos ele tem? '))
for x in range(1, qtd1 + 1):
    conjunto1.add(str(input('{}º elemento: '.format(x))))
print('=-' * 20)

while opcao != 0:
    opcao = int(input('''
    [ 0 ] SAIR DO PROGRAMA
    [ 1 ] UNIÃO
    [ 2 ] INTERSECÇÃO
    [ 3 ] DIFERENÇA (subtração)
    [ 4 ] PERTINÊNCIA       
    [ 5 ] DIFERENÇA SIMETRICA
    [ 6 ] SUBCONJUNTO
    [ 7 ] TROCAR OS ELEMENTOS DOS CONJUNTOS
    Escolha uma opção: '''))

    while opcao != 0 and opcao != 1 and opcao != 2 and opcao != 3 and opcao != 4 and opcao != 5 and opcao != 6 and 7 != opcao:
        print('Opção inválida! tente novamente.')

        opcao = int(input('''
        [ 0 ] SAIR DO PROGRAMA
        [ 1 ] UNIÃO
        [ 2 ] INTERSECÇÃO
        [ 3 ] DIFERENÇA (subtração)
        [ 4 ] PERTINÊNCIA       
        [ 5 ] DIFERENÇA SIMETRICA
        [ 6 ] SUBCONJUNTO
        [ 7 ] TROCAR OS ELEMENTOS DOS CONJUNTOS
        Escolha uma opção: '''))
        print('\n', '=-' * 20)
    if opcao == 1:  # união
        print('=-' * 20)
        print('\nA união entre {} e {} é {}\n'.format(nome, nome1, conjunto.union(
            conjunto1)))  # junta os dois conjuntos sem repetir elementos
        print('\n', '=-' * 20)
    elif opcao == 2:  # intersecção
        print('=-' * 20)
        print('\nA intersecção entre {} e {} é {} \n'.format(nome, nome1, conjunto.intersection(conjunto1)))
        print('\n', '=-' * 20)
    elif opcao == 3:  # subtração
        print('=-' * 20)
        negocio = [g for g in conjunto if g not in conjunto1]  # a - b
        print('\n{} - {} = {}'.format(nome, nome1, negocio))
        negocio1 = [h for h in conjunto1 if h not in conjunto]  # b - a
        print('\n{} - {} = {}'.format(nome1, nome, negocio1))
        print('\n', '=-' * 20)
    elif opcao == 4:  # PERTINÊNCIA
        print('=-' * 20)
        if conjunto1.isdisjoint(conjunto):  # testa se sao disjuntos
            print('\nOs conjuntos {} e {} são disjuntos'.format(nome, nome1))  # verifica se são disjuntos
        else:
            if len(conjunto) == len(conjunto.intersection(conjunto1)):  # se estiver contido em a
                print('\nO conjunto {} está contido em {}'.format(nome, nome1))
            elif len(conjunto) != len(conjunto.intersection(conjunto1)):  # se nao estiver contido em a
                print('\nO conjunto {} não esta contido em {}'.format(nome, nome1))
            if len(conjunto1) == len(conjunto1.intersection(conjunto)):  # se estiver contido em b
                print('\nO conjunto {} está contido em {}'.format(nome1, nome))
            elif len(conjunto1) != len(conjunto1.intersection(conjunto)):  # se nao estiver contido em b
                print('\no conjunto {} não está contido em {}'.format(nome1, nome))
        print('\n', '=-' * 20)
    elif opcao == 5:  # diferença simetrica
        print('=-' * 20)
        print(
            '\nA diferença simetrica entre {} e {} é {}'.format(nome, nome1, conjunto.symmetric_difference(conjunto1)))
        print('\n', '=-' * 20)
    elif opcao == 6:  # SUBCONJUNTO
        print('=-' * 20)
        aa = 'é'
        if not conjunto.issubset(conjunto1):
            aa = 'não é'
        print('\nO conjunto {} {} subconjunto de {}'.format(nome, aa, nome1))
        aa = 'é'
        if conjunto1.issubset(conjunto):
            aa = 'não é'
        print('\nO conjunto {} {} subconjunto de {}'.format(nome1, aa, nome))
        print('\n', '=-' * 20)
    elif opcao == 7:
        print('=-' * 20)
        nome = str(input('Qual o nome do primeiro conjunto? ')).upper()
        qtd = int(input('Quantos elementos ele tem? '))
        for c in range(1, qtd + 1):
            conjunto.add(str(input('{}º elemento: '.format(c))))
        print('\n', '=-' * 20)
        nome1 = str(input('\nQual o nome do segundo conjunto? ')).upper()
        qtd1 = int(input('Quantos elementos ele tem? '))
        for x in range(1, qtd1 + 1):
            conjunto1.add(str(input('{}º elemento: '.format(x))))
        print('=-' * 20)
    elif opcao == 0:

        if 12 <= now.hour < 17:  # Verifica a hora que esta no pc
            xx = 'Tenha uma ótima tarde!!'
        elif 5 < now.hour < 12:
            xx = 'Tenha um ótimo dia!!'
        else:
            xx = 'Tenha uma ótima noite'
        print('Até mais.{}!!'.format(xx))
        input()        # DESENVOLVIDO POR DANIELLY GARCIA JARDIM

