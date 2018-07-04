def alphabet(palavra):
    aux = []
    for c in palavra:
        aux.append(ListaTemp[0].get(c, ord(c)))
    return aux
ListaTemp = [{'t':0, 's':1, 'h':2, 'j':3, 'm':4, 'p':5, 'n':6, 'z':7, 'w':8, 'l':9, 'r':10, 'c':11, 'b':12, 'x':13, 'k':14, 'q':15, 'v':16, 'd':17, 'g':18, 'f': 19}] + [0] * 8 # 1=preposicao; 2=verbo; 3=verbo1; 4=contbonito; 5=convertido; 6=soma; 7=01
with open('txtA.txt') as d:
    for line in d:
        for word in line.split():
            ListaTemp = [{'t': 0, 's': 1, 'h': 2, 'j': 3, 'm': 4, 'p': 5, 'n': 6, 'z': 7, 'w': 8, 'l': 9, 'r': 10,'c': 11, 'b': 12, 'x': 13, 'k': 14, 'q': 15, 'v': 16, 'd': 17, 'g': 18, 'f': 19},ListaTemp[1], ListaTemp[2], ListaTemp[3], ListaTemp[4], 0, 0, 0]  # 1=preposicao; 2=verbo; 3=verbo1; 4=contbonito; 5=convertido; 6=soma; 7=01
            if len(word) % 2 == 0 and 'x' not in word and word[len(word)-1] not in 'ftsjc':
                ListaTemp[1] += 1
            if word[0] not in 'ftsjc' and len(word) == 5:
                ListaTemp[2] += 1
                if word[-1] in 'ftsjc':
                    ListaTemp[3] += 1
            for d in range(0, len(word)):
                ListaTemp[5] += 20 ** d * ListaTemp[0][word[d]]
            for c in range(0, len(str(ListaTemp[5]))):
                if str(ListaTemp[5]).count(str(ListaTemp[5])[c]) > 1:
                        ListaTemp[7] = 1
                ListaTemp[6] += int(str(ListaTemp[5])[c])
            if ListaTemp[6] % 2 == 0 and ListaTemp[7] == 0:
                ListaTemp[4] += 1
            ordenado = sorted(line.split(), key=alphabet)
open('resultado.txt', 'w').write(f'A;{ListaTemp[1]}\nB;{ListaTemp[2]}\nC;{ListaTemp[3]}\nD;{" ".join(ordenado)}\nE;{ListaTemp[4]}')