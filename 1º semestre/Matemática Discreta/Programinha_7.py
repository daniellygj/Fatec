from TheDoctor import imprimir
from console import readsite

x = readsite('http://dontpad.com/TheDoctor/md/FechoTransitivo.txt')
imprimir(x)
qtd = int(input("Quantas interações você deseja adicionar? (max 10)"))

try:
    if qtd > 10:
        print('Digite uma quantidade menor.')
        qtd = int(input("Quantas interações você deseja adicionar? (max 10)"))
except ValueError:
    print('Informação inválida, tente novamente.')
    qtd = int(input("Quantas interações você deseja adicionar? (max 10)"))

conjunto = []
print("digite os numeros separados por ponto e vírgula")
for c in range(0, qtd):
    conjunto.append(str(input(f"{c+1}º: ")))
c2 = 0
for c in range(len(conjunto)):
    a = conjunto[c][0]
    b = conjunto[c][2]
    for c2 in range(0, len(conjunto)):
        b1 = conjunto[c2][0]
        c = conjunto[c2][2]
        if b == b1:
            if f'{a},{c}' not in conjunto:
                print(f'A relação ({a};{c}) Foi adicionada a relação, pois ({a};{b});({b};{c})')
                conjunto.append(f'{a};{c}')
            else:
                print(f'A relação ({a},{c}) seria adicionada a relação, pois ({a};{b});({b};{c}), mas ela já existe, e não pode se repetir')
for c in conjunto:
    print(f'({c})', end=';')

