#include <iostream>

int main()
{
    // declareing a variable
    int x = 10;

    // declaring a pointer variable
    int *p = &x; // &x gives the address of x
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;

    x = 20; // changing the value of x
    std::cout << "New value of x: " << x << std::endl;
    std::cout << "Value of pointer p (address of x): " << p << std::endl;
}