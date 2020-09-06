# rest-pymongo
Projeto de Rest simples utilizando a microframework de Python: Bottle e MongoDB

É preciso ter o MongoDB instalado.
Se for utilizar docker, executar os seguintes comandos:
``` docker run --name <container-name> -d -p 27017 mongo:latest ```
``` docker exec -it <conntainerId> bash ```
``` mongo ```
``` use names ```
``` db.names.insert({name: "<seuNome>"}) ```

  

Para executar:

```pip3 install -r requirements.txt```

```python rest.py```

Necessário Pythoon 3.x
