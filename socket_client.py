import socket

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect(("localhost", 55555))

message = client.recv(1024).decode('utf-8')
print(message)