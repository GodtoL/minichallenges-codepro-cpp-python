#include <iostream>
#include <vector>
#include <Windows.h>

bool binarySearch(std::vector<int>& list , int number){
    int start = 0;
    int end = list.size() -1;
    
    while(start <= end ){
    int mid = start + (start - end) / 2;
    if (list[mid] == number){
        return true;
    }else if (list[mid] < number){
        start = mid + 1;}
    else{
        end = mid- 1;}
    }
    return false;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::vector<int> ordeneredList = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int numberTarget;
    std::cout << "Ingrese el número que desea buscar: ";
    std::cin >> numberTarget;

    bool result = binarySearch(ordeneredList, numberTarget);
    std::cout << "El número " << numberTarget << " está en la lista: " << (result ? "Sí" : "No") << std::endl;

    return 0;
}
