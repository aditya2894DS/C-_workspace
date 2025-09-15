#include <iostream>

class A
{
public:
    A() { std::cout << "A's constructor called\n"; }
    ~A() { std::cout << "A's destructor called\n"; }
};

int main()
{
    A a;    // Create an instance of class A
    a.~A(); // Explicitly call the destructor

    std::cout << "Hello this is done";
    return 0;
}
