// Switch statement

// Default statement is optional.
/*
break statement is optional but usually needed to prevent
fall-through which means executing subsequent cases.
*/

#include <iostream>

int main()
{
    int a = 3, b = 3, ch;
    std::cin >> ch;

    switch (ch)
    {
    case 1:
        std::cout << "Addition: " << a + b << std::endl;
        break; // without break, it will fall through to next case
    case 2:
        std::cout << "Subtraction: " << a - b << std::endl;
        break; // without break, it will fall through to next case
    case 3:
        std::cout << "Multiplication: " << a * b << std::endl;
        break; // without break, it will fall through to next case
    default:
        std::cout << "Invalid choice" << std::endl;
    }
    return 0;
}