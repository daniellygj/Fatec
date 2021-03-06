SELECT NOME, COD_MALOTE, DESCRICAO, SITUACAO_MALOTE 
FROM MALOTES, FUNCIONARIOS, CONTEUDO 
WHERE FUNCIONARIOS.MATRICULA = MALOTES.MATRICULA 
AND MALOTES.CODIGO_CONTEUDO = CONTEUDO.CODIGO_CONTEUDO;

-- RESPOSTA 02 (D) 
SELECT NOME, CODIGO, DESCRICAO, QUANTIDADE 
FROM PECAS, FORNECEDORES, FORNECIMENTOS
WHERE FORNECIMENTOS.COD_PECA = PECAS.COD_PECA 
AND FORNECIMENTOS.COD_FORN = FORNECEDORES.COD_FORN;

-- RESPOSTA 03 (A)
(A) SELECT e.edi_descricao, l.liv_titulo From Editora e, Livro l

-- RESPOSTA 04 (A)

-- RESPOSTA 05  (C)
(C) SELECT e.edi_descricao From Editora e 
       where e.edi_descricao like ‘A%’
	   
-- RESPOSTA 06 (E)
(E) select emp_cod from emprestimo
where emp_data_emprestimo = (select min(emp_data_emprestimo) from emprestimo)

-- RESPOSTA 07 (C)
Select edi_cod, edi_descricao from editora e, livro l 
     where l.edi_cod = e.edi_cod
	 
-- RESPOSTA 08
SELECT E.EXE_COD AS EXEMPLAR, E.EXE_DESCRICAO AS DESCRICAO
FROM EXEMPLAR E 
INNER JOIN ITEM_EMPRESTIMO I ON E.EXE_COD = I.EXE_COD AND I.EMP_COD = 1;

-- RESPOSTA 09
SELECT LIVRO.LIV_TITULO AS LIVRO, COUNT(EXE_COD) AS QUANTIDADE, LIVRO.LIV_COD 
FROM LIVRO 
INNER JOIN EXEMPLAR ON LIVRO.LIV_COD = EXEMPLAR.LIV_COD 
GROUP BY LIVRO.LIV_TITULO, LIVRO.LIV_CODIGO;

-- RESPOSTA 10
SELECT LIV_TITULO AS LIVRO, COUNT(*) AS QUANTIDADE 
FROM LIVRO 
INNER JOIN EXEMPLAR ON LIVRO.LIV_COD = EXEMPLAR.LIV_COD 
GROUP BY LIV_TITULO HAVING COUNT(*) > 4 ;

-- RESPOSTA 11
SELECT * FROM ( SELECT P.PES_NOME AS NOME FROM PESSOA P
				INNER JOIN EMPRESTIMO E ON P.PES_COD = E.PES_COD
				GROUP BY P.PES_NOME
				ORDER BY COUNT(*) ) 
WHERE ROWNUM = 1;

-- RESPOSTA 12
O operador any retorna qualquer valor que esteja de acordo com a condição 
SELECT * FROM PESSEOA WHERE PES_COD < ANY (2, 3, 4) -- retorna os que são menores que 2, ou menores que 3, ou menores que 4

O iperador in retorna qualquer valor que esteja dentro de um determinado conjunto de valores
SELECT * FROM PESSOA WHERE PES_COD IN (1, 2, 3) -- Retorna apenas as pessoas que possuem o codigo 1, 2 ou 3

O operador all retorna qualquer valor que esteja de acordo com a condição
SELECT * FROM PESSEOA WHERE PES_COD < all (3, 4, 5) --  retorna as pessoa que possuem o código menor do que 3, 4 e 5


-------------------------------------------------------- PARTE 2 --------------------------------------------------------
-- RESPOSTA 01
SELECT GRAV_NOME FROM GRAVADORA
INNER JOIN CD ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO 
AND GRAV_NOME NOT IN ( SELECT GRAV_NOME FROM CD                        
					   INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO 
                       AND CD_PRECO_VENDA > 80 )
GROUP BY GRAV_NOME;


-- RESPOSTA 02
SELECT CD_NOME FROM CD
INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO 
AND CD_PRECO_VENDA <= ANY ( SELECT MAX(CD_PRECO_VENDA) FROM CD 
                            INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO
                            GROUP BY GRAVADORA.GRAV_NOME );

-- RESPOSTA 03
SELECT CD_NOME FROM CD
INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO 
AND CD_PRECO_VENDA <= ANY ( SELECT MIN(CD_PRECO_VENDA) FROM CD 
                            INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO 
							AND GRAVADORA.GRAV_CODIGO = 1
                            GROUP BY GRAVADORA.GRAV_NOME );

-- RESPOSTA 04
SELECT CD_NOME FROM CD
INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO 
AND CD_PRECO_VENDA <= ALL ( SELECT AVG(CD_PRECO_VENDA) FROM CD 
                            INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO AND GRAVADORA.GRAV_CODIGO = 1
                            GROUP BY GRAVADORA.GRAV_NOME );


-- RESPOSTA 05
SELECT INITCAP(CD_NOME) FROM CD
INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO 
WHERE CD_PRECO_VENDA > 10 OR GRAVADORA.GRAV_CODIGO = 3
ORDER BY CD_NOME DESC;


-- RESPOSTA 06
SELECT CD_NOME, CD_DATA_LANCAMENTO, GRAV_NOME FROM CD
INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO  
WHERE CD_DATA_LANCAMENTO BETWEEN '29/03/15' AND '29/04/19';


-- RESPOSTA 07
SELECT CD_NOME, GRAV_NOME FROM CD
INNER JOIN GRAVADORA ON CD.GRAV_CODIGO = GRAVADORA.GRAV_CODIGO(+);

-- RESPOSTA 08
SELECT CD.CD_CODIGO FROM CD 
INNER JOIN FAIXA F ON F.CD_CODIGO = CD.CD_CODIGO
INNER JOIN MUSICA M ON F.MUS_CODIGO = M.MUS_CODIGO;

-- RESPOSTA 09
SELECT CD_NOME, CC.CAT_CODIGO FROM CD 
INNER JOIN CD_CATEGORIA CC 
ON CD.CD_PRECO_VENDA BETWEEN CC.MENOR_PRECO AND  CC.MAIOR_PRECO;

-- RESPOSTA 10
SELECT CD_NOME FROM CD;

-- RESPOSTA 12
SELECT C.CD_CODIGO, C.CD_NOME, C.CD_PRECO_VENDA, M.MUS_DURACAO
FROM CD C 
INNER JOIN FAIXA F ON C.CD_CODIGO = F.CD_CODIGO
INNER JOIN MUSICA M ON F.MUS_CODIGO = M.MUS_CODIGO
WHERE ROWNUM = 1;


-- RESPOSTA 13
SELECT G.GRAV_NOME FROM
GRAVADORA G 
INNER JOIN CD C ON G.GRAV_CODIGO = C.GRAV_CODIGO
GROUP BY G.GRAV_NOME
HAVING COUNT(*) > 2;

-- RESPOSTA 14
SELECT M.MUS_NOME, F.FAIXA_NUMERO, C.CD_CODIGO FROM MUSICA M
INNER JOIN FAIXA F ON M.MUS_CODIGO = F.MUS_CODIGO
INNER JOIN CD C ON F.CD_CODIGO = C.CD_CODIGO
WHERE C.CD_CODIGO IN (102, 103);


-- RESPOSTA 15
SELECT M.MUS_NOME, F.FAIXA_NUMERO, C.CD_CODIGO FROM MUSICA M
INNER JOIN FAIXA F ON M.MUS_CODIGO = F.MUS_CODIGO
INNER JOIN CD C ON F.CD_CODIGO = C.CD_CODIGO
WHERE C.CD_CODIGO IN (102, 103);


-- RESPOSTA 16
SELECT AUT_CODIGO AS IDAUTOR, AUT_NOME AS AUTOR FROM AUTOR WHERE AUT_CODIGO < 10
UNION SELECT DISTINCT M.MUS_CODIGO, M.MUS_NOME FROM MUSICA M WHERE MUS_CODIGO < 15
