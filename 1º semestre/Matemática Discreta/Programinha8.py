from TheDoctor import imprimir
from console import readsite

imprimir(readsite('http://dontpad.com/TheDoctor/md/fechoreflexivo.txt'))

def namatriz(matriz):
    print('\nNa matriz:')
    for c in matriz:
        print(c)
    print('\n')


print("Fecho Reflexivo")
qtd = int(input('Quantas relações deseja adicionar?'))
print("Entre com a relação (Utilize apenas 1 2 e 3)")

relacoes = []


for c in range(0, qtd):
    temp = input(f'{c+1}º ')
    while temp in relacoes:
        print('Relação já adicionada. Entre com outra')
        temp = input(f'{c+1}º ')
        if temp not in relacoes:
            break
    relacoes.append(temp)

    while relacoes[c][0] not in '123' and relacoes[c][1] not in '123':
        print('Utilize apenas os números 1, 2, 3 e 4. Digite novamente.')
        relacoes[c] = (input(f'{c+1}º '))

for c in range(0, len(relacoes)):
    relacoes[c].replace(',', '')


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
