#include <iostream>
#include <vector>
#include <Windows.h>

bool busquedaBinaria(const std::vector<int>& lista, int numero) {
    int inicio = 0;
    int final = lista.size() - 1;

    while (inicio <= final) {
        int medio = inicio + (final - inicio) / 2; // Esto ayuda a evitar posibles desbordamientos

        if (lista[medio] == numero) {
            return true;
        } else if (lista[medio] < numero) {
            inicio = medio + 1;
        } else {
            final = medio - 1;
        }
    }

    return false;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::vector<int> listaOrdenada = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int numeroABuscar;
    std::cout << "Ingrese el número que desea buscar: ";
    std::cin >> numeroABuscar;

    bool resultado = busquedaBinaria(listaOrdenada, numeroABuscar);
    std::cout << "El número " << numeroABuscar << " está en la lista: " << (resultado ? "Sí" : "No") << std::endl;

    return 0;
}
