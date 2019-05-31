-- 1. TODOS OS PERSONAGENS QUE POSSUEM ALGUM TIPO DE RELACIONAMENTO
SELECT P.NOME FROM PERSONAGEM P 
INNER JOIN PER_REL PR ON PR.PER_ID = P.ID OR PR.PER_ID2 = P.ID
GROUP BY P.NOME;

--resultado:
--    NOME
--    personagem5
--    personagem6
--    personagem21
--    personagem3
--    personagem25
--    personagem4
--    personagem13
--    personagem15
--    personagem16
--    personagem2
--    personagem30
--    personagem19
--    personagem20


-- 2. TODOS OS VEICULOS QUE CONTEM ARMAS
SELECT * FROM VEICULO V
INNER JOIN ARMA_VEIC AV ON AV.VEI_ID = V.ID;

--    TRIPULACAO      FABRICANTE      ID      MODELO      CLASSE      NOME        ARM_ID  VEI_ID
--    tripulacao4	  fabricante4	    4	    modelo4 	classe4 	nome4	    22  	4
--    tripulacao13	  fabricante13	    13  	modelo13	classe13	nome13  	24  	13
--    tripulacao4	  fabricante4	    4	    modelo4	    classe4	    nome4	    26  	4
--    tripulacao28	  fabricante28	    28  	modelo28	classe28	nome28  	29  	28
--    tripulacao27	  fabricante27	    27	    modelo27	classe27	nome27  	8   	27
--    tripulacao15	  fabricante15	    15  	modelo15	classe15	nome15  	9   	15


-- 3. TODOS OS PERSONAGENS QUE NASCERAM EM UM PLANETA QUE SAO DE DETERMINADA AFILIACAO
SELECT P.NOME FROM PERSONAGEM P
INNER JOIN PER_NASCEU_PLA PNP ON P.ID = PNP.PER_ID
INNER JOIN PLA_AFI PA ON PNP.PLA_ID = PA.PLA_ID
GROUP BY P.NOME ;

-- NOME
-- personagem24
-- personagem5
-- personagem17
-- personagem28
-- personagem18
-- personagem11
-- personagem8
-- personagem26
-- personagem30
-- personagem20


-- 4. TODOS OS PERSONAGENS QUE POSSUEM VEICULOS COM ARMA
SELECT P.NOME FROM PERSONAGEM P
INNER JOIN PER_VEI PV ON P.ID = PV.PER_ID
INNER JOIN ARMA_VEIC AV ON AV.VEI_ID = PV.VEI_ID
GROUP BY P.NOME;

--    NOME
--    personagem12
--    personagem27
--    personagem21
--    personagem3
--    personagem17
--    personagem25
--    personagem11
--    personagem18
--    personagem8
--    personagem13
--    personagem16


-- 5. TODOS OS PERSONAGENS BIOLOGICOS QUE CONSTRUIRAM UM SER ROBOTICO
SELECT P.NOME FROM PERSONAGEM P
INNER JOIN PER_CRIA_ROB PCR ON PCR.BIO_ID = P.ID
GROUP BY P.NOME;

--    NOME
--    personagem12
--    personagem6
--    personagem14
--    personagem1
--    personagem3
--    personagem4
--    personagem13
--    personagem9


-- 6. TODOS OS PERSONAGENS QUE SAO BIOLOGICOS E SAO DE AFILIACAO "X"
SELECT P.NOME FROM PERSONAGEM P
INNER JOIN BIOLOGICO B ON P.ID = B.PER_ID
INNER JOIN PER_AFI PA ON PA.PER_ID = P.ID AND PA.AFI_ID = 1
GROUP BY P.NOME;

--    NOME
--    personagem27


-- 7. TODOS OS ROBOS QUE POSSUEM EQUIPAMENTO
SELECT P.NOME FROM PERSONAGEM P
INNER JOIN ROB_EQUIP RE ON RE.ROB_ID = P.ID
GROUP BY P.NOME;

--    NOME
--    personagem12
--    personagem7
--    personagem5
--    personagem6
--    personagem3
--    personagem1
--    personagem13
--    personagem15
--    personagem8
--    personagem10
--    personagem2
--    personagem9

-- 8. TODOS OS PERSONAGENS BIOLOGICOS QUE NASCERAM NO PLANETA "X"
SELECT P.NOME FROM PERSONAGEM P 
INNER JOIN BIOLOGICO B ON B.PER_ID = P.ID
INNER JOIN PER_NASCEU_PLA PNP ON P.ID = PNP.PER_ID
GROUP BY P.NOME;

--    NOME
--    personagem24
--    personagem27
--    personagem21
--    personagem17
--    personagem18
--    personagem28
--    personagem29
--    personagem23
--    personagem26
--    personagem30
--    personagem20


-- 9. TODOS OS PERSONAGENS BIOLOGICOS QUE POSSUEM ARMA
SELECT P.NOME FROM PERSONAGEM P 
INNER JOIN BIOLOGICO B ON B.PER_ID = P.ID
INNER JOIN PER_ARM PA ON PA.PER_ID = P.ID
GROUP BY P.NOME;

--    NOME
--    personagem21
--    personagem17
--    personagem25
--    personagem22
--    personagem28
--    personagem23
--    personagem16
--    personagem26
--    personagem30
--    personagem19
--    personagem20

-- 10. TODOS OS PERSONAGENS BIOLOGICOS QUE POSSUEM VEICULOS COM ARMAS
SELECT P.NOME FROM PERSONAGEM P 
INNER JOIN BIOLOGICO B ON B.PER_ID = P.ID
INNER JOIN PER_VEI PV ON PV.PER_ID = P.ID
INNER JOIN ARMA_VEIC AV ON AV.VEI_ID = PV.VEI_ID
GROUP BY P.NOME;

--    NOME
--    personagem27
--    personagem21
--    personagem17
--    personagem25
--    personagem18
--    personagem16


-- 11. TODOS OS PERSONAGENS QUE TEM A LETRA "D" NO NOME
SELECT P.NOME FROM PERSONAGEM P WHERE P.NOME LIKE '%3%';

--    NOME
--    personagem3
--    personagem13
--    personagem23
--    personagem30


-- 12. TODOS OS PERSONAGENS DO LADO NEGRO DA FORCA
SELECT P.NOME FROM PERSONAGEM P WHERE P.LADO_FORCA = LOWER('negro');

--    NOME
--    personagem2
--    personagem4
--    personagem6
--    personagem8
--    personagem10
--    personagem12
--    personagem14
--    personagem16
--    personagem18
--    personagem20
--    personagem22
--    personagem24
--    personagem26
--    personagem28

-- 13. TODOS OS PERSONAGENS DO LADO LUZ DA FORCA
SELECT P.NOME FROM PERSONAGEM P WHERE P.LADO_FORCA = LOWER('luz');

--    NOME
--    personagem3
--    personagem5
--    personagem7
--    personagem9
--    personagem11
--    personagem13
--    personagem15
--    personagem17
--    personagem19
--    personagem21
--    personagem23
--    personagem25
--    personagem27
--    personagem29


-- 14. TODOS OS PERSONAGENS NASCIDOS EM DETERMINADO PLANETA
SELECT P.NOME FROM PERSONAGEM P 
INNER JOIN PER_NASCEU_PLA PNP ON PNP.PER_ID = P.ID AND PNP.PLA_ID = 9;

--    NOME
--    personagem21


-- 15. TODAS AS ARMAS QUE O VEICULO X CONTEM
SELECT A.NOME FROM ARMA A
INNER JOIN ARMA_VEIC AV ON AV.ARM_ID = A.ID
INNER JOIN VEICULO V ON V.ID = AV.VEI_ID AND V.ID = 28;

--    NOME
--    arma29
--    arma30
--    arma4


-- 16. Exibir todos os veiculos que possuem mais de duas armas
SELECT V.NOME, COUNT(V.ID) AS QTD_ARMA FROM VEICULO V
INNER JOIN ARMA_VEIC AV ON V.ID = AV.VEI_ID 
GROUP BY V.NOME
HAVING COUNT(*) > 2  ;

--    NOME      QTD_ARMA
--    nome4	    3
--    nome28	3


-- 17. Exibir os robos que possuem 1, 3 ou 5 equipamentos
SELECT P.NOME, COUNT(*) AS QTD_EQUIP FROM PERSONAGEM P
INNER JOIN ROBOTICO R ON P.ID = R.PER_ID
INNER JOIN ROB_EQUIP RE ON R.PER_ID = RE.ROB_ID
GROUP BY P.NOME
HAVING COUNT(*) IN (1, 3, 5);

--    NOME          QTD_EQUIP
--    personagem5   	1
--    personagem6	    1
--    personagem3	    3
--    personagem15	    1
--    personagem8	    1
--    personagem9	    1


-- 18. Exibir os planetas que possuam entre 2 e 5 luas
SELECT P.NOME, P.QTD_LUA FROM PLANETA P
WHERE P.QTD_LUA > 2 AND P.QTD_LUA < 5;

--    NOME      QTD_LUA
--    nome3 	3
--    nome4	    4

-- 19. Listar os personagens e suas armas
SELECT P.NOME AS PERSONAGEM, A.NOME AS ARMA FROM PERSONAGEM P
INNER JOIN PER_ARM PA ON P.ID = PA.ARM_ID 
INNER JOIN ARMA A ON A.ID = PA.PER_ID
GROUP BY P.NOME, A.NOME;


--    PERSONAGEM        ARMA
--    personagem22	    arma1
--    personagem5	    arma16
--    personagem24	    arma17
--    personagem5	    arma19
--    personagem25	    arma20
--    personagem30	    arma25
--    personagem12	    arma12
--    personagem9	    arma9
--    personagem30	    arma12
--    personagem21	    arma23
--    personagem5	    arma28
--    personagem4	    arma1
--    personagem3	    arma9
--    personagem9	    arma22
--    personagem13  	arma25
--    personagem26  	arma5
--    personagem8	    arma8
--    personagem26	    arma11
--    personagem2	    arma15
--    personagem26  	arma17
--    personagem23  	arma25
--    personagem27  	arma26
--    personagem30	    arma30
--    personagem25  	arma5
--    personagem24	    arma30
--    personagem17	    arma7
--    personagem9	    arma11
--    personagem24	    arma12
--    personagem2	    arma21



