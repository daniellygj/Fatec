from console import *
vet = []
print('digite o resultado final da tabela-verdade que verifico para você que tipo de resultado é!')

def digitar():
    x = input('quantos valores você deseja colocar?[4] ou [8]?')
    try:
        xx = int(x)
        if xx not in (4, 8):
            printf('opção informada é inválida')
            return digitar()
    except ValueError:
        printf('opção informada não é um número')
        return digitar()

    return xx

def verificar (a, b):
    return a in b

p = 1
m = 0
x = digitar()

while p == 1:
    if x == 0:
       x =  digitar()

    for y in range(0, x):
        valor = str(input('digite um valor lógico [V], [F] '))
        while valor not in 'vVfF':
            printf('valor lógico inexistente, tente novamente')
            valor = str(input('digite um valor logico valido [V], [F] '))
        if valor in 'vVfF':
            vet.append(str(valor))
    if x == 4:
        if vet[0] in 'Vv' and vet[1] in 'Vv' and vet[2] in 'Vv' and vet[3] in 'Vv':
            printf('é uma tautologia, pois todos os são verdadeiros')
        elif vet[0] in 'Ff' and vet[1] in 'Ff' and vet[2] in 'Ff' and vet[3] in 'Ff':
            printf('é uma contradição, pois todos os valores são falsos')
        else:
            printf('é uma contingencia, pois existem valores verdadeiros e falsos ')
    if x == 8:
        if vet[0] in 'Vv' and vet[1] in 'Vv' and vet[2] in 'Vv' and vet[3] in 'Vv' and vet[4] in 'Vv' and vet[5] in 'Vv' and vet[6] in 'Vv' and vet[7] in 'Vv':
            printf('é uma tautologia, pois todos os são verdadeiros')
        elif vet[0] in 'Ff' and vet[1] in 'Ff' and vet[2] in 'Ff' and vet[3] in 'Ff' and vet[4] in 'Ff' and vet[5] in 'Ff' and vet[6] in 'Ff' and vet[7] in 'Ff':
            printf('é uma contradição, pois todos os valores são falsos')
        else:
            printf('é uma contingencia, pois existem valores verdadeiros e falsos ')


    resp = input('deseja tentar novamente? [s] [n]')
    resp1 = 0
    if resp in 'sS':
        x = digitar()
        vet = []
    elif resp in 'nN':
        p = 0

    try:
        resp1 = str(resp)
        if resp1 not in ('s', 'S', 'N', 'n'):
            printf('a opção informada é inválida')
            resp = input('deseja tentar novamente? [s] [n]')
            x = digitar()
    except ValueError:
        printf('opção informada é inválida')
        resp = input('deseja tentar novamente? [s] [n]')
        x = digitar()                      
         #By Danny