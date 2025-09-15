//
// Created by rklad on 10-09-2025.

#include <iostream>
// '<<' is the extraction operator.
// '>>' is the insertion operator
int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Age provided is: " << age << std::endl;

    std::cerr << "This is displayed using cerr. Which is used to display error immediately.";
    return 0;
}