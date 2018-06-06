'''
Na pacata vila campestre de Ponteironuloville, todos os telefones têm 6 dígitos. A companhia telefônica estabelece as seguintes regras sobre os números.
    - Não pode haver dois dígitos consecutivos idênticos, porque isso é chato;
    - A soma dos dígitos tem que ser par, porque isso é legal; e
    - O último dígito não pode ser igual ao primeiro porque isso dá azar.

Premissas:
    - Os dados devem ser lidos diretamente de um arquivo contendo os número de telefones especificados abaixo (com a mesma quantidade de telefones por linha);
    - Analisados através de um algoritmo;
    - Os números de telefone válidos devem ser escritos (um por linha) no arquivo tel_validos.out, sendo o último registro o total de telefones analisados (total1) e o total de telefones válidos (total2) no formado "total1| total2"; e

Atividade:
Dadas essas regras perfeitamente razoáveis, bem projetadas e maduras, criar um algoritmo que calcule e imprima quantos números de telefone na lista abaixo são válidos...
...salvando em um arquivo tel_validos.txt os números válidos, e...
...salvando em um arquivo tel_invalidos.txt os número inválidos.
'''
arquivo = open('telefones.txt')
invalido = open('tel_invalidos.txt', 'w')
valido = open('tel_validos.txt', 'w')
soma = contvalido = continvalido = tot = 0
for linha in arquivo:
    for telefone in linha.strip('\n').split(' '):
        telvalido = True
        if len(telefone) != 6:
            telvalido = False
        for c in range(0, len(telefone)-1):
            if telefone[c] == telefone[c+1] or soma % 2 != 0 or telefone[0] == telefone[5]:
                telvalido = False
                soma += int(telefone[c])
        if telvalido:
            contvalido += 1
            valido.write(telefone + '\n')
        else:
            invalido.write(telefone + '\n')

valido.write(str(contvalido))
invalido.write(str(continvalido))
invalido.close()
valido.close()
arquivo.close()