# include <iostream>
# include <vector>
# include <Windows.h>

int recursion(int number){
    if (number <= 1){
        return number;}
    return number * recursion(number-1);

}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int number = 7;
    int recursionNumber = recursion(number);
    std::cout << "El factorial de: " << number << " es " << recursionNumber;

    return 0;
}