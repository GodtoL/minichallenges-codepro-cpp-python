import socket

host = 'localhost'
port = 55555

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind((host, port))
server.listen(1)

print("Esperando conexiones")

client_socket, client_address = server.accept()

print("Conexión exitosa")

client_socket.send("Hola, te conectaste, chau".encode('utf-8'))

