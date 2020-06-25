from Person1.client_tcp import start_client as start_person1
from Person1.server_thread_tcp import start_server as start_server_person1

from Person2.client_tcp import start_client as start_person2
from Person2.server_thread_tcp import start_server as start_server_person2

import threading
from time import sleep

if __name__ == "__main__":
    print("""Executar: 
    (1) Person1 
    (2) Person2""")
    value = int(input())
    if value == 1:
        threading.Thread(target=start_server_person1).start()
        sleep(10)
        start_person1()
    elif value == 2:
        threading.Thread(target=start_server_person2).start()
        sleep(10)
        start_person2()
    else: 
        print("INPUT INVALIDO")