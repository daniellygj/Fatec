/*
    1. Criar as tabelas correspondentes ao modelo. Apenas Nota e Ano_Lancamento
    são numéricos (2 dígitos inteiros e 1 casa decimal para o primeiro e 4 dígitos
    inteiros para o segundo). Foto contém um texto indicando a localização no
    disco da foto. Com exceção de Foto e Sinopse, o preenchimento dos demais
    dados é obrigatório 
*/
 
CREATE TABLE FIL_FILME (
    FIL_NOME VARCHAR(100),
    FIL_SINOPSE VARCHAR(255),
    FIL_ANO NUMBER(4), 
    FIL_NOME_ADAPTACAO VARCHAR(100),
    FIL_ANO_ADAPTACAO NUMBER(4),
    CONSTRAINT FIL_NOME_ANO_PK PRIMARY KEY (FIL_NOME, FIL_ANO),
    CONSTRAINT FIL_NOME_ADAPTACAO_FK FOREIGN KEY (FIL_NOME_ADAPTACAO, FIL_ANO_ADAPTACAO) REFERENCES FIL_FILME(FIL_NOME, FIL_ANO)
);
 
CREATE TABLE USU_USUARIO (
    USU_EMAIL VARCHAR(100),
    USU_SENHA VARCHAR(20) NOT NULL,
    USU_FOTO VARCHAR(100),
    USU_NOME_COMPLETO VARCHAR(100) NOT NULL,
    CONSTRAINT USU_EMAIL_PK PRIMARY KEY (USU_EMAIL)
);
 
CREATE TABLE AMI_AMIZADE (
    AMI_USU_EMAIL VARCHAR(100),
    AMI_USU_EMAIL_AMIGO VARCHAR(100),
    CONSTRAINT AMI_USU_EMAIL_PK PRIMARY KEY (AMI_USU_EMAIL, AMI_USU_EMAIL_AMIGO),
    CONSTRAINT AMI_USU_EMAIL_FK FOREIGN KEY (AMI_USU_EMAIL) REFERENCES USU_USUARIO(USU_EMAIL),
    CONSTRAINT AMI_USU_EMAIL_AMIGO_FK FOREIGN KEY (AMI_USU_EMAIL_AMIGO) REFERENCES USU_USUARIO(USU_EMAIL)
);
 
CREATE TABLE AST_ASSISTE (
    AST_USU_EMAIL VARCHAR(100),
    AST_FIL_NOME VARCHAR(100),
    AST_FIL_ANO NUMBER(4),
    AST_NOTA NUMBER(3,1),
    CONSTRAINT AST_EMAIL_NOME_ANO_PK PRIMARY KEY (AST_USU_EMAIL, AST_FIL_NOME, AST_FIL_ANO),
    CONSTRAINT AST_USU_EMAIL_FK FOREIGN KEY (AST_USU_EMAIL) REFERENCES USU_USUARIO(USU_EMAIL),
    CONSTRAINT AST_FIL_NOME_ano_FK FOREIGN KEY (AST_FIL_NOME, AST_FIL_ANO) REFERENCES FIL_FILME(FIL_NOME, FIL_ANO)
); 
/*
    2. Inserir 3 registros de usuário (um deles com nome Jack) e 6 filmes (associar 2
    filmes a cada pessoa). Ao menos um usuário não deve possuir foto. Dois filmes
    devem possuir o mesmo nome, sendo o mais recente baseado no mais antigo.
    Algum usuário deve ser amigo de Jack;
*/ 
 
-- Filme
INSERT INTO FIL_FILME (FIL_NOME, FIL_SINOPSE, FIL_ANO) VALUES ('Star Wars', 'filme no espaco com tirinho', 1976);
INSERT INTO FIL_FILME (FIL_NOME, FIL_SINOPSE, FIL_ANO) VALUES ('Senhor dos aneis', 'filme na natureza com elfo e anao', 2002);
INSERT INTO FIL_FILME (FIL_NOME, FIL_SINOPSE, FIL_ANO) VALUES ('Filme', 'filmezinho que conta uma historinha', 1975);
INSERT INTO FIL_FILME (FIL_NOME, FIL_SINOPSE, FIL_ANO) VALUES ('Outro filme', 'Outro filme que conta historinha', 2001);
INSERT INTO FIL_FILME (FIL_NOME, FIL_SINOPSE, FIL_ANO, FIL_NOME_ADAPTACAO, FIL_ANO_ADAPTACAO) VALUES ('Outro filmezito', 'Adaptacao do outro filme', 2012, 'Outro filme', 2001);
INSERT INTO FIL_FILME (FIL_NOME, FIL_SINOPSE, FIL_ANO, FIL_NOME_ADAPTACAO, FIL_ANO_ADAPTACAO) VALUES ('Filmezito', 'Filmezito baseado no filme', 2018, 'Filme', 1975);
 
-- Usuario
INSERT INTO USU_USUARIO (USU_EMAIL, USU_SENHA, USU_FOTO, USU_NOME_COMPLETO) VALUES ('jack@hotmail.com', 's3nh4', 'Pictures/imagemJack', 'jack gelado'); --Jack frost
INSERT INTO USU_USUARIO (USU_EMAIL, USU_SENHA, USU_FOTO, USU_NOME_COMPLETO) VALUES ('bruninha@hotmail.com', 'senhadificil', 'Pictures/imagemBruna', 'Bruninha zinha');INSERT INTO USU_USUARIO (USU_EMAIL, USU_SENHA, USU_NOME_COMPLETO) VALUES ('dani@hotmail.com', 'senhazita', 'dani danada');
 
-- Assiste
INSERT INTO AST_ASSISTE (AST_USU_EMAIL, AST_FIL_NOME, AST_FIL_ANO, AST_NOTA) VALUES ('jack@hotmail.com', 'Filme', 1975, 7.7);
INSERT INTO AST_ASSISTE (AST_USU_EMAIL, AST_FIL_NOME, AST_FIL_ANO, AST_NOTA) VALUES ('jack@hotmail.com', 'Outro filme', 2001, 9.5);
INSERT INTO AST_ASSISTE (AST_USU_EMAIL, AST_FIL_NOME, AST_FIL_ANO, AST_NOTA) VALUES ('dani@hotmail.com', 'Star Wars', 1976, 10.0);
INSERT INTO AST_ASSISTE (AST_USU_EMAIL, AST_FIL_NOME, AST_FIL_ANO, AST_NOTA) VALUES ('dani@hotmail.com', 'Outro filmezito', 2012, 9.8);
INSERT INTO AST_ASSISTE (AST_USU_EMAIL, AST_FIL_NOME, AST_FIL_ANO, AST_NOTA) VALUES ('bruninha@hotmail.com', 'Filmezito', 2018, 7.9);
INSERT INTO AST_ASSISTE (AST_USU_EMAIL, AST_FIL_NOME, AST_FIL_ANO, AST_NOTA) VALUES ('bruninha@hotmail.com', 'Senhor dos aneis', 2002, 9.9);
 
-- Amizade
INSERT INTO AMI_AMIZADE (AMI_USU_EMAIL, AMI_USU_EMAIL_AMIGO) VALUES ('jack@hotmail.com', 'bruninha@hotmail.com');
INSERT INTO AMI_AMIZADE (AMI_USU_EMAIL, AMI_USU_EMAIL_AMIGO) VALUES ('bruninha@hotmail.com', 'dani@hotmail.com');
 
-- 3. Alterar a sinopse de um dos filmes
UPDATE FIL_FILME SET FIL_SINOPSE = 'FILME DO OUTRO FILME' WHERE FIL_NOME = 'Outro filmezito';
 
-- 4. Excluir um dos filmes (um que não seja adaptação ou original)
DELETE FROM AST_ASSISTE WHERE AST_FIL_NOME = 'Star Wars' AND AST_FIL_ANO = 1976;
DELETE FROM FIL_FILME WHERE FIL_NOME = 'Star Wars' AND FIL_ANO = 1976;
 
 
-- 5. Retornar o nome e o ano de lançamento dos filmes lançados antes de 2014
SELECT FIL_NOME FROM FIL_FILME WHERE FIL_ANO <= 2014;
 
-- 6. Retornar o nome completo dos usuários que não possuem foto
SELECT USU_NOME_COMPLETO FROM USU_USUARIO WHERE USU_FOTO IS NULL;
 
-- 7. Retornar o nome completo dos usuários que assistiram a um filme adaptado 
SELECT USU_NOME_COMPLETO FROM USU_USUARIO, AST_ASSISTE, FIL_FILME WHERE AST_ASSISTE.AST_USU_EMAIL = USU_USUARIO.USU_EMAIL AND FIL_FILME.FIL_NOME = AST_ASSISTE.AST_FIL_NOME AND FIL_FILME.FIL_ANO = AST_ASSISTE.AST_FIL_ANO AND FIL_NOME_ADAPTACAO IS NOT NULL;
 
-- 8. Retornar o nome completo de todos os usuários amigos de Jack --------------------------------7
SELECT USU_NOME_COMPLETO FROM USU_USUARIO, AMI_AMIZADE WHERE (AMI_AMIZADE.AMI_USU_EMAIL = 'jack@hotmail.com' AND USU_USUARIO.USU_EMAIL = AMI_AMIZADE.AMI_USU_EMAIL_AMIGO) OR  (AMI_AMIZADE.AMI_USU_EMAIL_AMIGO = 'jack@hotmail.com' AND USU_USUARIO.USU_EMAIL = AMI_AMIZADE.AMI_USU_EMAIL);