#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Graph {
    int V; // Número de vértices
    vector<vector<pair<int, int>>> adj; // Lista de adyacencia (nodo, peso)
    
public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }
    
    // Función para agregar una arista con peso
    void addEdge(int v, int w, int weight) {
        adj[v].push_back(make_pair(w, weight));
        adj[w].push_back(make_pair(v, weight)); // En un grafo no dirigido, la arista va en ambas direcciones
    }
    
    // Función para encontrar el camino más corto desde src a dest usando Dijkstra
    void shortestPath(int src, int dest) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(V, INT_MAX);
        vector<int> parent(V, -1);

        pq.push(make_pair(0, src));
        dist[src] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (auto &neighbor : adj[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;

                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v], v));
                    parent[v] = u;
                }
            }
        }

        // Imprimir el camino más corto
        if (dist[dest] == INT_MAX) {
            cout << "No hay camino entre " << src << " y " << dest << endl;
            return;
        }

        cout << "Distancia mínima desde " << src << " a " << dest << " es " << dist[dest] << endl;
        cout << "El camino es: ";

        vector<int> path;
        for (int v = dest; v != -1; v = parent[v]) {
            path.push_back(v);
        }

        for (int i = 0; i < path.size(); ++i) {
            cout << path[i];
            if (i != path.size() - 1) {
                cout << " -> ";
            }
        }
        cout << endl;
    }
};

int main() {
    int V = 5; // Número de nodos

    Graph g(V); // Crear un grafo con V nodos

    // Agregar las 6 aristas con pesos arbitrarios
    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(0, 3, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 4, 7);
    g.addEdge(2, 3, 3);

    int src = 0, dest = 4;
    g.shortestPath(src, dest);

    return 0;
}
