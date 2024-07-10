#include <iostream>
#include <vector>
#include <unordered_set>

// Función DFS
void dfs(const std::vector<std::vector<int>>& graph, int start, std::unordered_set<int>& visited) {
    visited.insert(start);
    std::cout << start << " ";
    for (int neighbor : graph[start]) {
        if (visited.find(neighbor) == visited.end()) {
            dfs(graph, neighbor, visited);
        }
    }
}

int main() {
    // Definición del grafo
    std::vector<std::vector<int>> graph = {
        {1, 2},    // Nodo 0 conectado a 1 y 2
        {0, 3, 4}, // Nodo 1 conectado a 0, 3 y 4
        {0, 4},    // Nodo 2 conectado a 0 y 4
        {1, 4},    // Nodo 3 conectado a 1 y 4
        {1, 2, 3}  // Nodo 4 conectado a 1, 2 y 3
    };

    std::unordered_set<int> visited;
    dfs(graph, 0, visited);
    return 0;
}
