import socket

host = 'localhost'
port = 55555

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect((host, port))

print("Conectado")

message = input('')

client.send(message.encode('utf-8'))

print("Buena esa, mensaje enviado")