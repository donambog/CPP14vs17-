#include <memory>
#include <iostream>

// Ce code est compatible C++14 et C++17
// We can see that for the unique ptr in c++14 we need to specify argument type <...>
//this won't compile in C++14. It only compile in C++17
class MyClass {
public:
    MyClass() { std::cout << "MyClass constructor" << std::endl; }
    ~MyClass() { std::cout << "MyClass destructor" << std::endl; }
};

// C++14
void mainCpp14() {
    std::unique_ptr<MyClass> ptr14(new MyClass);
    std::cout << "Pointer address in C++14: " << ptr14.get() << std::endl;
    std::cout << "Using in C++14" << std::endl;
}

// C++17
void mainCpp17() {
    // Using CTAD in C++17 with std::make_unique
    
    std::unique_ptr ptr17 = std::make_unique<MyClass>();
    std::cout << "Pointer address in C++17: " << ptr17.get() << std::endl;
    std::cout << "Using in C++17" << std::endl;
}

int main() {
    std::cout << "C++ Version: " << __cplusplus << std::endl;

    //mainCpp14();
    mainCpp17();
    return 0;
}

