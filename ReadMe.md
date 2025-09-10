# C++ basics

## Datatypes
1. Primitive: Built in datatypes or predefined and can be used directly by the user to declare variables
   1. Int - To store integer value and requires 4 bytes. -2147483648 to 2147483647.
   2. Char - For storing characters
   3. Float - For storing boolean or logical values
   4. Bool - For storing single precision floating point or decimal values
   5. Void - Void means without any value. Represents a valueless entity.
2. Abstract: Defined by the user.
   1. Class
   2. Structure

## Datatype modifier
Used with built-in datatype to modify the length of data that a particular datatype can hold. They are-
    1. Signed
    2. Unsigned
    3. Short
    4. Long

## Input/Output operations
1. iostream - iostream stands for standard input/output stream. This header file contains definition to objects like cin, cout, cerr,etc.
2. iomanip - iomanip stands for input output manipulators. The methods declared in this files are used for manipulating streams. This files contains definition of setw, setprecision, etc.
3. fstream - Mainly describes the file stream. This header file is used to handle the data being read from a file as input or data being written into the file as output.


## cerr vs clog

## Insertion and extraction operator
1. '<<' is the extraction operator. eg std::cout << "This is message";
2. '>>' is the insertion operator eg std::cin >> age;

## Ampserand(&) in C++
In C++, the ampersand can take various usage.
1. It can work like a **unary operator** to get the memory address of a variable.
    > - int number = 10; 
    > - int* ptr = &number;  // Assigns the address of 'number' to 'ptr'
    > - std::cout << "Value: " << number << std::endl;
    > - std::cout << "Address: " << ptr << std::endl;

2. The ampersand symbol is also used in variable declarations to declare reference variables. A reference is an alias or alternative name for an existing variable. By using an ampersand in a variable declaration, you can create a reference variable that refers to the same memory location as the original variable.
   > - int number = 5;
   > - int& ref = number;  // 'ref' is a reference to 'number'
   > - std::cout << "Original: " << number << std::endl;
   > - std::cout << "Reference: " << ref << std::endl;
   > - ref = 8;  // Modifying the value through the reference
   > - std::cout << "Modified: " << number << std::endl;

3. Ampersands are commonly used in function parameters to indicate pass-by-reference. When a parameter is passed by reference, changes made to the parameter within the function affect the original variable passed as an argument.
   > - void increment(int& num) {
        num++;
        }
    
   > - int main() {
        int number = 7;
        std::cout << "Before increment: " << number << std::endl;
        increment(number);
        std::cout << "After increment: " << number << std::endl;
        return 0;
    }

4. In C++, the ampersand symbol can be used as the bitwise AND operator. When used between two operands, it performs a bitwise AND operation on the binary representations of the operands.
    > - int a = 5;    // binary: 0101
    > - int b = 3;    // binary: 0011
    > - int result = a & b;  // bitwise AND operation
    > - // result = 0001 (binary) = 1 (decimal)

5. In C++, the ampersand symbol can also be used as the logical AND operator. It is used to combine boolean expressions and returns true if both expressions evaluate to true.
   > - bool condition1 = true;
   > - bool condition2 = false;
   > - bool result = condition1 && condition2;  // logical AND operation
   > - // result = false
   
6. In C++, when working with templates, the ampersand symbol can be used as a template parameter to denote a reference type. It is often used to specify that a template function or class takes a reference to an object rather than a copy.
   > - template<typename T>
   > - void swap(T& a, T& b) {
   >   - T temp = a;
   >   - a = b;
   >   - b = temp;
   >   - }

   > - int main() {
   >   - int x = 5;
   >   - int y = 10;
   >   - swap(x, y);  // Swaps the values of x and y
   >   -  return 0;
   >   - }