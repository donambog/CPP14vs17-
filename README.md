What changes between C++14 vs C17 for unique_ptr, CTAD(Compatible Tempalte argument deduction)
La principale différence pour unique_ptr entre C++14 et C++17
est qu'en C++17, les types d'arguments peuvent être déduits (CTAD).


Explanation
In C++14:

auto ptr17 = std::make_unique<MyClass>();: The auto keyword allows the compiler to deduce ptr17's type as std::unique_ptr<MyClass>. This works because std::make_unique returns a std::unique_ptr of the specified type.

Direct usage of std::unique_ptr ptr17 = std::make_unique<MyClass>(); does not work because CTAD is not supported in C++14.

In C++17:

std::unique_ptr ptr17 = std::make_unique<MyClass>();: CTAD allows the compiler to deduce the type for std::unique_ptr directly from the return value of std::make_unique.

In summary, auto works in C++14 for type deduction because it deduces the type from the initializer expression, whereas CTAD, a feature introduced in C++17, allows similar type deduction directly when declaring std::unique_ptr without the need for auto.
