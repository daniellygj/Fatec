arquivo = open('telefones.txt')
invalido = open('tel_invalidos.out', 'w')
valido = open('tel_validos.out', 'w')
soma = contvalido = continvalido = tot = 0
for linha in arquivo:
    for telefone in linha.split(' '):
        if len(telefone) != 6:
            telvalido = False
        telvalido = True
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
