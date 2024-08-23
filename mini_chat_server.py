import socket

host = 'localhost'
port = 55555

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind((host, port))

print("Esperando conexiones")
server.listen()

client_socket, client_address = server.accept()

print("Conexion con un cliente. Esperando mensaje")
message = client_socket.recv(1024).decode('utf-8')

print(message)