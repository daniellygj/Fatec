def printf(a):
    print(a)
    print('=-' * 30)  # Falta do que fazer


def readsite(link):  # Lê um site e retorna com os textos
    from urllib.request import urlopen
    sla = urlopen(link)
    sla1 = sla.read()
    return sla1.decode('utf-8')


def read(arquivo):  # Lê um arquivo e o imprime
    a = open(arquivo, 'r')
    for linha in a:
        print(linha, end='')
    a.close()


def write(arquivo, texto):  # Escreve no arquivo
    open(arquivo, 'w')
    arquivo.writelines(texto)


def bubble_sort(x):
    for c in range(len(x)): #no lugar do x, você vai colocar uma lista, ja sem os elementos repetidos
        troca = False
        for c2 in range(1, len(x)-c): # aqui, é que tipo. tem  2 1 3. ele compara 2 com 1. depois, ele nao precisa comparar o 2 novamente
            if x[c2] > x[c2 - 1]: # se o 2 for maior que o 1
                x[c2], x[c2 - 1] = x[c2 - 1], x[c2]  # eles trocam de lugar
                troca = True # essa variavel é opcional. é que se bnão houver trocas, é pq ele já está ordenado, então o programa para
        if not troca:
            break
    return x

# By Danny


