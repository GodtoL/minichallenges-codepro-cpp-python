# include <iostream>
# include <queue>
# include <Windows.h>

int main (){
    SetConsoleOutputCP(CP_UTF8);

    std::queue<int> q;
    q.push(18);
    q.push(2);
    q.push(72);
    q.push(1);
    q.emplace(2);
    q.push(0);
    q.pop();
    std::cout << "El elemento del frente es: " << q.front() << std::endl;
    std::cout << "El elemento de atrás es: " << q.back() << std::endl;
    std::cout << "El tamaño de la cola es: " << q.size();

    return 0;
}