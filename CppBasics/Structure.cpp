// Structures are a way to group related variables together under one name.
// Each variable in a structure is called a member.

/**
    Unlike an array, which can only hold variables of the same type,
    a structure can hold variables of different types.
 */

#include <iostream>

// declaring a structure
struct Employee
{
    int id;       // integer member
    float salary; // float member
    char grade;   // character member
};

// accessing structure members using dot operator
int main()
{
    Employee emp1; // creating an instance of structure Employee
    emp1.id = 101;
    emp1.salary = 50000.50; // assigning value to salary member
    emp1.grade = 'A';

    std::cout << "Employee ID: " << emp1.id << std::endl;
    std::cout << "Employee Salary: " << emp1.salary << std::endl;
    std::cout << "Employee Grade: " << emp1.grade << std::endl;

    return 0;
}

// one structure many instances
struct
{
    int myNum;
    std::string myString;
} myStruct1, myStruct2;

// myStruct1 and myStruct2 are two instances of the same structure
// myStruct1 and myStruct2 can hold different values in their members

// Assign values to structure members inside a function
int main2()
{
    myStruct1.myNum = 1;
    myStruct2.myNum = 2; // This is valid

    // Optionally print values to verify
    std::cout << "myStruct1.myNum: " << myStruct1.myNum << std::endl;
    std::cout << "myStruct2.myNum: " << myStruct2.myNum << std::endl;

    return 0;
}