#include <memory>
#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "MyClass constructor" << std::endl; }
    ~MyClass() { std::cout << "MyClass destructor" << std::endl; }
};

// C++14
void mainCpp14() {
    // Using auto in C++14 to deduce the type
    auto ptr14 = std::make_unique<MyClass>();
    std::cout << "Pointer address in C++14: " << ptr14.get() << std::endl;
    std::cout << "Using in C++14" << std::endl;
}

int main() {
    std::cout << "C++ Version: " << __cplusplus << std::endl;

    mainCpp14();
    return 0;
}
