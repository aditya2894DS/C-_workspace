// Unary operators: ++, --
// Binary operators: +, -, /, *, %, ==, !=, >, <, >=, <=, &&, ||,
// Ternary operator: ?:

#include <iostream>

int main()
{
    int a = 1, b = 2;

    // post increment
    a++;
    std::cout << "Value of a after a++: " << a << std::endl;

    // post decrement
    b--;
    std::cout << "Value of b after b--: " << b << std::endl;

    // binary operators
    std::cout << "a + b = " << a + b << std::endl;     // addition operator
    std::cout << "a - b = " << a - b << std::endl;     // subtraction operator
    std::cout << "a * b = " << a * b << std::endl;     // multiplication operator
    std::cout << "a / b = " << a / b << std::endl;     // division operator
    std::cout << "a % b = " << a % b << std::endl;     // modulus operator
    std::cout << "a == b: " << (a == b) << std::endl;  // a equal to b
    std::cout << "a != b: " << (a != b) << std ::endl; // a not equal to b
    std::cout << "a > b: " << (a > b) << std::endl;    // a greater than b
    std::cout << "a < b: " << (a < b) << std::endl;    // a less than b
    std::cout << "a >= b: " << (a >= b) << std::endl;  // a greater than or equal to b
    std::cout << "a <= b: " << (a <= b) << std::endl;  // a less than or equal to b
    std::cout << "a && b: " << (a && b) << std::endl;  // and operator
    std::cout << "a || b: " << (a || b) << std::endl;  // or operator

    // assignment operator
    int c = 3;
    c += a; // c = c + a
    std::cout << "Value of c after c += a: " << c << std::endl;
    c -= a; // c = c - a
    std::cout << "Value of c after c -= a: " << c << std::endl;
    c *= a; // c = c * a
    std::cout << "Value of c after c *= a: " << c << std::endl;
    c /= a; // c = c / a
    std::cout << "Value of c after c /= a: " << c << std::endl;
    c %= a; // c = c % a
    std::cout << "Value of c after c %= a: " << c << std::endl;

    // ternary operator
    int max = (a > b) ? a : b;
    std::cout << "Max of a and b is: " << max << std::endl;

    return 0;
}