// Declaring multiple variables in C++
#include <iostream>

int x = 5, y = 10, z = 15; // Multiple variable declaration

int main()
{
    std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
    std::cout << "Sum: " << (x + y + z) << std::endl;
    return 0;
}

// Identifiers:
// Valid identifiers
int validIdentifier1 = 1;
int _validIdentifier2 = 2;
int validIdentifier3_ = 3;
int validIdentifier4$ = 4; // '$' is allowed but not recommended
int validIdentifier5WithNumbers123 = 5;

// Invalid identifiers (uncommenting these will cause compilation errors)
// int 1invalidIdentifier = 1;    // Starts with a digit
// int invalid-Identifier = 2;    // Contains hyphen
// int invalid Identifier = 3;    // Contains space
// int invalid@Identifier = 4;    // Contains special character '@'
// int int = 5;                   // 'int' is a reserved keyword
// int return = 6;                // 'return' is a reserved keyword