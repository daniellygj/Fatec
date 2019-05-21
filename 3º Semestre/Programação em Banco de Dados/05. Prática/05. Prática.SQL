-- Crie as tabelas conforme modelo lógico acima e insira pelo menos 5 linhas
<table class="table" border="1">
  <thead>
    <tr>
      <th>Coluna 1</th>
      <th>Coluna 2</th>
      <th><input type="checkbox" class="checkAll" name="checkAll" /></th>
    </tr>
  </thead>
  <tbody>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
  </tbody>
</table>

<table class="table" border="1">
  <thead>
    <tr>
      <th>Coluna 1</th>
      <th>Coluna 2</th>
      <th><input type="checkbox" class="checkAll" name="checkAll" /></th>
    </tr>
  </thead>
  <tbody>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
    <tr role="row">
      <td>Texto 1</td>
      <td>Texto 2</td>
      <td><input type="checkbox" name="check" /></td>
    </tr>
  </tbody>
</table>

CREATE TABLE FUN_FUNCIONARIO (
	FUN_COD NUMBER(4),
	FUN_LOGRADORO VARCHAR2(30),
	FUN_NOME VARCHAR2(30),
	FUN_SALARIO NUMBER(8,2),
	CAR_COD NUMBER(4),
	FUN_CEP NUMBER(4),
	FUN_NRO NUMBER(4),	
	DEP_COD NUMBER(4),
    CID_COD NUMBER(4),
    EST_COD NUMBER(4),
	
	CONSTRAINT FUN_COD_PK PRIMARY KEY (FUN_COD),
	CONSTRAINT CAR_COD_FK FOREIGN KEY (CAR_COD) REFERENCES CAR_CARGO(CAR_COD),
	CONSTRAINT CID_COD_FK FOREIGN KEY (CID_COD, EST_COD) REFERENCES CID_CIDADE(CID_COD, EST_COD),
	CONSTRAINT DEP_COD_FK FOREIGN KEY (DEP_COD) REFERENCES DEP_DEPARTAMENTO(DEP_COD)
);

-- INSERTS
INSERT INTO EST_ESTADO VALUES(1, 'AA');
INSERT INTO EST_ESTADO VALUES(2, 'BB');
INSERT INTO EST_ESTADO VALUES(3, 'CC');
INSERT INTO EST_ESTADO VALUES(4, 'DD');
INSERT INTO EST_ESTADO VALUES(5, 'EE');

INSERT INTO CID_CIDADE VALUES (1, 1, 'A');
INSERT INTO CID_CIDADE VALUES (2, 2, 'B');
INSERT INTO CID_CIDADE VALUES (3, 3, 'C');
INSERT INTO CID_CIDADE VALUES (4, 4, 'D');
INSERT INTO CID_CIDADE VALUES (5, 5, 'E');

INSERT INTO DEP_DEPARTAMENTO VALUES (1, 'DEP A');
INSERT INTO DEP_DEPARTAMENTO VALUES (2, 'DEP B');
INSERT INTO DEP_DEPARTAMENTO VALUES (3, 'DEP C');
INSERT INTO DEP_DEPARTAMENTO VALUES (4, 'DEP D');
INSERT INTO DEP_DEPARTAMENTO VALUES (5, 'DEP E');

INSERT INTO CAR_CARGO VALUES (1, 'CARGO A');
INSERT INTO CAR_CARGO VALUES (2, 'CARGO B');
INSERT INTO CAR_CARGO VALUES (3, 'CARGO C');
INSERT INTO CAR_CARGO VALUES (4, 'CARGO D');
INSERT INTO CAR_CARGO VALUES (5, 'CARGO E');

INSERT INTO FUN_FUNCIONARIO VALUES(1, 'LOGR A', 'NOME AA', 2.500, 1, 1111, 1, 1, 1, 1);
INSERT INTO FUN_FUNCIONARIO VALUES(2, 'LOGR B', 'NOME BB', 2.600, 2, 2222, 2, 2, 2, 2);
INSERT INTO FUN_FUNCIONARIO VALUES(3, 'LOGR C', 'NOME CC', 1.500, 3, 3333, 3, 3, 3, 3);
INSERT INTO FUN_FUNCIONARIO VALUES(4, 'LOGR D', 'NOME DD', 1.200, 4, 4444, 4, 4, 4, 4);
INSERT INTO FUN_FUNCIONARIO VALUES(5, 'LOGR E', 'NOME EE', 1.250, 5, 5555, 5, 5, 5, 5);


-- 2) Crie a View Funcionário_View com os campos :fun_cod, fun_nome ,fun_logradoro,  cid_nome, est_estado, carg_descricao, dep_descricao. Apenas será possível a leitura dos dados cadastrais pela view Funcionario_View.
CREATE VIEW FUNCIONARIO_VIEW AS SELECT FUN.FUN_COD, FUN.FUN_NOME, FUN.FUN_LOGRADORO, CID.CID_NOME, EST.EST_ESTADO, CAR.CAR_DESCRICAO, DEP.DEP_DESCRICAO 
                                FROM FUN_FUNCIONARIO FUN
                                INNER JOIN CID_CIDADE CID ON FUN.CID_COD = CID.CID_COD AND FUN.EST_COD = CID.EST_COD
                                INNER JOIN CAR_CARGO CAR ON FUN.CAR_COD = CAR.CAR_COD
                                INNER JOIN DEP_DEPARTAMENTO DEP ON DEP.DEP_COD = FUN.DEP_COD
                                INNER JOIN EST_ESTADO EST ON EST.EST_COD = CID.EST_COD
WITH READ ONLY;


-- 3) Consulte os dados cadastrais pela View (Funcionario_View) .
SELECT * FROM FUNCIONARIO_VIEW;


-- 4) Consulte os dados dos funcionários pela tabela Funcionário.
SELECT * FROM FUN_FUNCIONARIO;


-- 5) Insira um funcionário na tabela Funcionário e consulte pela View (Funcionario_View) .
INSERT INTO EST_ESTADO VALUES(6, 'FF');
INSERT INTO CID_CIDADE VALUES (6, 6, 'FF');
INSERT INTO DEP_DEPARTAMENTO VALUES (6, 'DEP F');
INSERT INTO CAR_CARGO VALUES (6, 'CARGO F');
INSERT INTO FUN_FUNCIONARIO VALUES(6, 'LOGR F', 'NOME FF', 1.750, 6, 6666, 6, 6, 6, 6);

SELECT * FROM FUNCIONARIO_VIEW WHERE FUN_COD = 6;


-- 6) Insira o campo fun_obs na View (Funcionario_View) . OBS: Ele deve existir primeiro na tabela de origem.
ALTER TABLE FUN_FUNCIONARIO ADD FUN_OBS VARCHAR2(30);

CREATE OR REPLACE VIEW FUNCIONARIO_VIEW AS SELECT FUN.FUN_COD, FUN.FUN_NOME, FUN.FUN_LOGRADORO, FUN.FUN_OBS, CID.CID_NOME, EST.EST_ESTADO, CAR.CAR_DESCRICAO, DEP.DEP_DESCRICAO 
                                FROM FUN_FUNCIONARIO FUN
                                INNER JOIN CID_CIDADE CID ON FUN.CID_COD = CID.CID_COD AND FUN.EST_COD = CID.EST_COD
                                INNER JOIN CAR_CARGO CAR ON FUN.CAR_COD = CAR.CAR_COD
                                INNER JOIN DEP_DEPARTAMENTO DEP ON DEP.DEP_COD = FUN.DEP_COD
                                INNER JOIN EST_ESTADO EST ON EST.EST_COD = CID.EST_COD
WITH READ ONLY;


-- 7) Consulte a definição da View (Funcionario_View)  no dicionário de dados. 
SELECT VIEW_NAME, TEXT FROM USER_VIEWS;
