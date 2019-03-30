-- Atividade feita em aula
-- Quais CDs que têm preço inferior a qualquer um dos cds da gravadora com código 2?

SELECT CD_CODIGO, CD_NOME, CD_PRECO_VENDA 
FROM CD
WHERE CD_PRECO_VENDA < ANY ( SELECT CD_PRECO_VENDA    -- Menor do que qualquer um com código 1
                             FROM CD                  -- (10, 12, 20) < ANY (10, 20) = 10, 12 
                             WHERE GRAV_CODIGO = 1 ); -- compara um a um com todos. menor que um ou outro
    



-- Quais CDs têm o preço de venda menot que todas as médias de preços de vendas por gravadoras?

SELECT CD_CODIGO, CD_NOME, CD_PRECO_VENDA
FROM CD
WHERE CD_PRECO_VENDA < ALL ( SELECT AVG(CD_PRECO_VENDA)  -- maior que todos, menor que todos
                             FROM CD                     -- (10, 12, 20) < ALL (12, 15) = 10
                             GROUP BY GRAV_CODIGO );
  
  
  
-- Dar desconto sobre o preço de venda dos CDs em função do preço.  
SELECT CD_NOME, CD_PRECO_VENDA, -- Apenas exibe o valor de desconto
CASE
    WHEN CD_PRECO_VENDA < 10 THEN CD_PRECO_VENDA * 0.10
    WHEN CD_PRECO_VENDA >= 10 AND CD_PRECO_VENDA < 13 THEN CD_PRECO_VENDA * 0.20
    ELSE CD_PRECO_VENDA * 0.30
END VENDA
FROM CD;

UPDATE CD SET CD_PRECO_VENDA = -- Atualiza a tabela
CASE
    WHEN CD_PRECO_VENDA < 10 THEN CD_PRECO_VENDA * 1.10
    WHEN CD_PRECO_VENDA >= 10 AND CD_PRECO_VENDA < 13 THEN CD_PRECO_VENDA * 1.20
    ELSE CD_PRECO_VENDA * 1.30
END;
COMMIT;

