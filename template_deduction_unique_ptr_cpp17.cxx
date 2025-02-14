#include <memory>
#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "MyClass constructor" << std::endl; }
    ~MyClass() { std::cout << "MyClass destructor" << std::endl; }
};

// C++17
void mainCpp17() {
    // Using CTAD in C++17
    std::unique_ptr ptr17 = std::make_unique<MyClass>();
    std::cout << "Pointer address in C++17: " << ptr17.get() << std::endl;
    std::cout << "Using in C++17" << std::endl;
}

int main() {
    std::cout << "C++ Version: " << __cplusplus << std::endl;

    mainCpp17();
    return 0;
}
