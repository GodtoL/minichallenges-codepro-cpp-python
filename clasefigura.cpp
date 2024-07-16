# include <iostream>
# include <windows.h>

class Figure{
    public:
        void print(){std::cout << "Esta es una figura\n";}
};

class Circle : Figure{
    public:
        
        void print(){std::cout << "Este es un circulo\n";}
};

int main(){
    SetConsoleCP(CP_UTF8);
    Circle Circle1;
    Circle1.print();
    return 0;
}