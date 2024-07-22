#include <iostream>

// Clase base s
class Animal {
public:
    virtual ~Animal() = default;

    virtual void makeSound() const {
        std::cout << "El animal hace un sonido genérico." << std::endl;
    }
};

// Clase derivada
class Dog : public Animal {
public:
    ~Dog() {
        std::cout << "Destructor de perro llamado." << std::endl;
    }

    void makeSound() const override {
        std::cout << "El perro ladra: ¡Guau guau!" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->makeSound();

    delete animal;

    return 0;
}
