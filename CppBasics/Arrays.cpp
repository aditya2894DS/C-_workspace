#include <iostream>

int main()
{
    int a[2];
    std::cout << a[-3] << std::endl; // Accessing out-of-bounds index (undefined behavior)
    std::cout << a[2] << std::endl;  // Accessing out-of-bounds index (undefined behavior)

    std::cout << "Size of array 'a'" << sizeof(a) << std::endl; // Size of the array in bytes
    std::cout << "Address of integer array" << std::endl;
    std::cout << &a[0] << std::endl; // Address of first element
    std::cout << &a[1] << std::endl; // Address of second element
    std::cout << a << std::endl;     // Address of first element (array name as pointer)

    return 0;
}