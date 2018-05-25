'''
Faça um programa que leia o arquivo “alice.txt” (o arquivo deve ser criado) e conte o número de ocorrências de cada palavra no texto.
'''
alice = open('alice.txt')
dic = {}
lista = []
lista1 = []
def opcao():
    opc = input('''[1] Saber a quantidade de vezes que uma palavra especifica se repete.
[2] Ver todas as palavras e a quantidade de vezes que se repetem. 
Escolha uma opção: ''').lower()

    try:
        while opc not in ('12'):
            print('Opção inválida, tente novamente.')
            opc = opcao()
    except ValueError:
        print('Opção inválida, tente novamente.')
        opc = opcao()

    return opc

for linha in alice:
    for palavra in linha.split():
        lista1.append(palavra.lower())
        if palavra not in lista:
            lista.append(palavra.lower())

for c in range(0, len(lista)):
    cont = 0
    for c1 in range(0, len(lista1)):
        if lista[c] in lista1[c1]:
            cont += 1
    dic[lista[c]] = cont

opc = opcao()

if opc == '1':
    palavra = input('Qual palavra? ')
    try:
        while palavra not in lista:
            print('Palavra não existe no texto')
            palavra = input('Qual palavra? ')
    except ValueError:
        print('Palavra não existe no texto')
        palavra = input('Qual palavra? ')

    print(f'A palavra {palavra} se repete {dic[palavra]} vezes')

elif opc == '2':
    for c in range(0, len(dic)):
        print(f'A palavra: "{lista[c]}" se repete {dic[lista[c]]} vez(es)')
