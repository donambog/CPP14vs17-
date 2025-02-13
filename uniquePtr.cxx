#include <memory>
#include <iostream>

// Ce code est compatible C++14 et C++17
// La principale différence pour unique_ptr entre C++14 et C++17
// est qu'en C++17, les types d'arguments peuvent être déduits (CTAD).

class MaClasse {
public:
    MaClasse(int x) {}
};

// C++14
void mainCpp14() {
    auto deleter = [](int* p) {
        std::cout << "Deleting value: " << *p << std::endl;
        delete p;
    };
    std::unique_ptr<int, decltype(deleter)> ptr2(new int(42), deleter);
    std::cout << "Value in C++14: " << *ptr2 << std::endl;
}

// C++17
void mainCpp17() {
    auto deleter = [](int* p) {
        std::cout << "Deleting value: " << *p << std::endl;
        delete p;
    };
    // Utilisation de CTAD en C++17
    std::unique_ptr ptr2(new int(42), deleter);
    std::cout << "Value in C++17: " << *ptr2 << std::endl;
}

int main() {
    std::cout << "C++ Version: " << __cplusplus << std::endl;

    mainCpp14();
    mainCpp17();
    return 0;
}

