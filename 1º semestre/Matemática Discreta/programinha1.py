# -*- coding: utf-8 -*-

from datetime import datetime
from time import sleep

def separador():
	print('=-' * 20)
	
def quebra():
	print('\n')
	
def pedirOpcao():
	result = (raw_input('''
[ 0 ] SAIR DO PROGRAMA
[ 1 ] UNIÃO
[ 2 ] INTERSECÇÃO
[ 3 ] DIFERENÇA (subtração)
[ 4 ] PERTINÊNCIA       
[ 5 ] DIFERENÇA SIMETRICA
[ 6 ] SUBCONJUNTO
[ 7 ] TROCAR OS ELEMENTOS DOS CONJUNTOS
Escolha uma opção: 
	'''))
	
	resultInt = 0;
	try:
		resultInt = int(result)
		if(resultInt not in (0,1,2,3,4,5,6,7)):
			print('Número não esta presente nas opções')
			pedirOpcao()
	except ValueError:
		print('Opção informada não é um número')
		pedirOpcao()
	
	return resultInt
	
def mostrarResultado(mensagem):
	separador()
	print(mensagem)
	quebra()
	separador()
	
def solicitarNomeConjunto(mensagem):
	return str(raw_input(mensagem)).upper()
	
def solicitarQuantidade(mensagem):
	return int(raw_input(mensagem))

def preencherConjunto(qtd):
	conjuntoTemp = set()
	for c in range(1, qtd + 1):
		conjuntoTemp.add(str(input('{}º elemento: '.format(c))))
	separador()
	return conjuntoTemp
	
def main():
	opcao = 1
	
	nome = solicitarNomeConjunto('Qual o nome do primeiro conjunto? ')
	qtd = solicitarQuantidade('Quantos elementos ele tem? ')
	conjunto = preencherConjunto(qtd)

	nome1 = solicitarNomeConjunto('\nQual o nome do segundo conjunto? ')
	qtd1 = solicitarQuantidade('Quantos elementos ele tem? ')
	conjunto1 = preencherConjunto(qtd1)

	while opcao != 0:
		opcao = pedirOpcao()
		if opcao == 1:  # união
			mostrarResultado('\nA união entre {} e {} é {}\n'.format(nome, nome1, conjunto.union(conjunto1)))
		elif opcao == 2:  # intersecção
			mostrarResultado('\nA intersecção entre {} e {} é {} \n'.format(nome, nome1, conjunto.intersection(conjunto1)))
		elif opcao == 3:  # subtração
			negocio = [g for g in conjunto if g not in conjunto1]  # a - b
			mostrarResultado('\n{} - {} = {}'.format(nome, nome1, negocio))
			negocio1 = [h for h in conjunto1 if h not in conjunto]  # b - a
			mostrarResultado('\n{} - {} = {}'.format(nome1, nome, negocio1))
		elif opcao == 4:  # PERTINÊNCIA
			if conjunto1.isdisjoint(conjunto):  # testa se sao disjuntos
				mostrarResultado('\nOs conjuntos {} e {} são disjuntos'.format(nome, nome1))  # verifica se são disjuntos
			else:
				if len(conjunto) == len(conjunto.intersection(conjunto1)):  # se estiver contido em a
					mostrarResultado('\nO conjunto {} está contido em {}'.format(nome, nome1))
				elif len(conjunto) != len(conjunto.intersection(conjunto1)):  # se nao estiver contido em a
					mostrarResultado('\nO conjunto {} não esta contido em {}'.format(nome, nome1))
				if len(conjunto1) == len(conjunto1.intersection(conjunto)):  # se estiver contido em b
					mostrarResultado('\nO conjunto {} está contido em {}'.format(nome1, nome))
				elif len(conjunto1) != len(conjunto1.intersection(conjunto)):  # se nao estiver contido em b
					mostrarResultado('\no conjunto {} não está contido em {}'.format(nome1, nome))
		elif opcao == 5:  # diferença simetrica
			mostrarResultado('\nA diferença simetrica entre {} e {} é {}'.format(nome, nome1, conjunto.symmetric_difference(conjunto1)))
		elif opcao == 6:  # SUBCONJUNTO
			aa = 'é'
			if not conjunto.issubset(conjunto1):
				aa = 'não é'
			mostrarResultado('\nO conjunto {} {} subconjunto de {}'.format(nome, aa, nome1))
			aa = 'é'
			if conjunto1.issubset(conjunto):
				aa = 'não é'
			mostrarResultado('\nO conjunto {} {} subconjunto de {}'.format(nome1, aa, nome))
		elif opcao == 7:
			nome = solicitarNomeConjunto('Qual o nome do primeiro conjunto? ')
			qtd = solicitarQuantidade('Quantos elementos ele tem? ')
			conjunto = preencherConjunto(qtd)

			nome1 = solicitarNomeConjunto('\nQual o nome do segundo conjunto? ')
			qtd1 = solicitarQuantidade('Quantos elementos ele tem? ')
			conjunto1 = preencherConjunto(qtd1)
		elif opcao == 0:

			if 12 <= datetime.now().hour < 17:  # Verifica a hora que esta no pc
				xx = 'Tenha uma ótima tarde!!'
			elif 5 < datetime.now().hour < 12:
				xx = 'Tenha um ótimo dia!!'
			else:
				xx = 'Tenha uma ótima noite'
			print('Até mais.{}!!'.format(xx))
			raw_input()        # DESENVOLVIDO POR DANIELLY GARCIA JARDIM

main()