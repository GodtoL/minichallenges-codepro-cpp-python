#include <iostream>
#include <vector>
#include <windows.h>

std::vector<int> sortBySelection(std::vector<int> numberList) {
    int sizeNumberList = numberList.size();
    for (int i = 0; i < sizeNumberList - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < sizeNumberList; j++) {
            if (numberList[j] < numberList[minIndex]) {
                minIndex = j;
            }
        }
        // Intercambiar el elemento mínimo encontrado con el primer elemento
        int temp = numberList[minIndex];
        numberList[minIndex] = numberList[i];
        numberList[i] = temp;
    }
    return numberList;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::vector<int> listWithoutOrder = {10, 7, 18, 28, 5};
    std::vector<int> listOrder = sortBySelection(listWithoutOrder);
    std::cout << "Lista ordenada: ";
    for (int i = 0; i < listOrder.size(); i++) {
        std::cout << listOrder[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}