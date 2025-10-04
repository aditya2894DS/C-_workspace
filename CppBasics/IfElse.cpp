#include <iostream>

int main()
{
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // if-else statement
    if (number > 0)
    {
        std::cout << "You entered a positive number." << std::endl;
    }
    else if (number < 0)
    {
        std::cout << "You entered a negative number." << std::endl;
    }
    else
    {
        std::cout << "You entered zero." << std::endl;
    }

    // nested if statement
    if (number != 0)
    {
        if (number % 2 == 0)
        {
            std::cout << "The number is even." << std::endl;
        }
        else
        {
            std::cout << "The number is odd." << std::endl;
        }
    }

    return 0;
}