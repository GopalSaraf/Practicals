from dateutil import parser
import threading
import datetime
import socket
import time


def startSendingTime(slave_client):
    while True:
        # provide server with clock time at the client
        slave_client.send(str(datetime.datetime.now()).encode())
        print("Recent time sent successfully", end="\n\n")
        time.sleep(5)


def startReceivingTime(slave_client):
    while True:
        # receive data from the server
        Synchronized_time = parser.parse(slave_client.recv(1024).decode())
        print(
            "Synchronized time at the client is: " + str(Synchronized_time), end="\n\n"
        )


def initiateSlaveClient(port=8080):
    slave_client = socket.socket()

    # connect to the clock server on local computer
    slave_client.connect(("127.0.0.1", port))

    # start sending time to server
    print("Starting to receive time from server\n")
    send_time_thread = threading.Thread(target=startSendingTime, args=(slave_client,))
    send_time_thread.start()

    # start receiving synchronized from server
    print("Starting to receiving " + "synchronized time from server\n")
    receive_time_thread = threading.Thread(
        target=startReceivingTime, args=(slave_client,)
    )
    receive_time_thread.start()


# Driver function
if __name__ == "__main__":
    # initialize the Slave / Client
    initiateSlaveClient(port=8080)
