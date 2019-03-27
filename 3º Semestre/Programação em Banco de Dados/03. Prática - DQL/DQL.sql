-- 1.	Listar o nome da pessoa do empréstimo de número 1.

SELECT PES_NOME FROM PESSOA WHERE PES_COD = 1;

-- 2.	Listar todas as editoras ordenadas por ordem alfabética.

SELECT * FROM EDITORA ORDER BY (EDI_DESCRICAO);

-- 3.	Exibir os títulos dos livros que começam com a letra A.

SELECT LIV_TITULO FROM LIVRO WHERE LIV_TITULO LIKE 'A%';

-- 4.	Exibir os títulos dos livros que começam com a letra A e que tenham o ano de publicação maior que 2013.

SELECT LIV_TITULO FROM LIVRO WHERE LIV_TITULO LIKE 'A%' AND ANOPUBLICACAO > 2013 ;

-- 5.	Exibir a quantidade de telefones que possuem DDD igual a 12.

SELECT COUNT(*) FROM TELEFONE WHERE TEL_DDD = 12;

-- 6.	Listar a quantidade de empréstimo por aluno. (exiba: - pes_nro_matricula e - quantidade). 

SELECT A.PES_NRO_MATRICULA, COUNT(DISTINCT(A.PES_NRO_MATRICULA))
FROM EMPRESTIMO E, ALUNO A WHERE E.PES_COD = A.PES_COD GROUP BY A.PES_NRO_MATRICULA;

-- 7.	Listar as editoras e os seus livros. (exiba: - edi_cod,edi_descricao, - liv_cod). 

SELECT E.EDI_COD, E.EDI_DESCRICAO, L.LIV_COD FROM EDITORA E, LIVRO L WHERE E.EDI_COD = L.EDI_COD;

-- 8.	Listar os códigos dos exemplares (exe_cod), a descrição (exe_descricao) do empréstimo realizado em uma determinada data.

SELECT E.EXE_COD, E.EXE_DESCRICAO 
FROM EXEMPLAR E, ITEM_EMPRESTIMO I, EMPRESTIMO EM 
WHERE E.EXE_COD = I.EXE_COD AND EM.EMP_COD = I.EMP_COD;

-- 9.	Listar os livros que possuam mais de 3 exemplares.

SELECT L.LIV_TITULO FROM LIVRO L, EXEMPLAR E WHERE L.LIV_COD = L.LIV_COD GROUP BY L.LIV_TITULO HAVING COUNT(E.EXE_COD) > 3;

-- 10.	Listar os professores (nome e titulação) com seus respectivos telefones. OBS: Listar também os professores que não tenham telefone. Realizar duas resoluções uma com a sintaxe ANSI e outra com a sintaxe ORACLE

SELECT PESSOA.PES_NOME, PROFESSOR.TITULACAO, TELEFONE.TEL_NUMERO 
FROM PESSOA, PROFESSOR, TELEFONE 
WHERE PROFESSOR.PES_COD = PESSOA.PES_COD 
AND TELEFONE.PES_COD = PESSOA.PES_COD(+);

-- 11.	Listar o livro (liv_titulo) mais antigo da biblioteca

SELECT * FROM (SELECT L.LIV_TITULO FROM LIVRO L ORDER BY L.ANOPUBLICACAO ASC) WHERE ROWNUM <= 1 ;

-- 12.	Exibir o nome da pessoa que mais emprestou livro na biblioteca.

SELECT * FROM (SELECT P.PES_NOME 
FROM PESSOA P , EMPRESTIMO E 
WHERE P.PES_COD = E.PES_COD 
GROUP BY P.PES_NOME 
ORDER BY COUNT(E.PES_COD) DESC) 
WHERE ROWNUM <= 1;

-- 13.	Listar a quantidade de exemplares por livro.

SELECT COUNT(E.LIV_COD) FROM EXEMPLAR E, LIVRO L WHERE L.LIV_COD = E.LIV_COD GROUP BY L.LIV_COD;

-- 14.	Listar os livros (liv_titulo) que começam com A e possuem ano de publicação maior que 2011.

SELECT LIV_TITULO FROM LIVRO WHERE LIV_TITULO LIKE 'A%' AND ANOPUBLICACAO > 2011;

-- 15.	Listar os livros emprestados pela pessoa de código 1 (Listar liv_titulo)

SELECT L.LIV_TITULO
FROM LIVRO L, EMPRESTIMO E, EXEMPLAR EX, ITEM_EMPRESTIMO IE, PESSOA P
WHERE P.PES_COD = E.PES_COD
AND E.EMP_COD = IE.EMP_COD
AND EX.EXE_COD = IE.EXE_COD
AND EX.LIV_COD = L.LIV_COD
AND P.PES_COD = 1;
