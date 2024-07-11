#include <iostream>
#include <vector>
#include <queue>

void BFS(int startNode, const std::vector<std::vector<int>>& adjList) {
    std::vector<bool> visited(adjList.size(), false);
    std::queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        std::cout << "Visited: " << node << std::endl;

        // Explorar los vecinos del nodo actual
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    // Crear un grafo simple con 5 nodos
    int numNodes = 5;
    std::vector<std::vector<int>> adjList(numNodes);

    // Añadir aristas (grafo no dirigido)
    adjList[0] = {1, 2};    // Nodo 0 conectado a nodos 1 y 2
    adjList[1] = {0, 3, 4}; // Nodo 1 conectado a nodos 0, 3 y 4
    adjList[2] = {0};       // Nodo 2 conectado a nodo 0
    adjList[3] = {1};       // Nodo 3 conectado a nodo 1
    adjList[4] = {1};       // Nodo 4 conectado a nodo 1

    // Realizar BFS desde el nodo 0
    BFS(0, adjList);

    return 0;
}
