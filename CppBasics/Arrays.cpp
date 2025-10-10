#include <iostream>
#include <string>
#include <vector>

int main()
{
    // with array size
    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    // omit array size
    std::string cars3[] = {"Volvo", "BMW", "Ford", "Mazda"};

    int a[2];
    std::cout << a[-3] << std::endl; // Accessing out-of-bounds index (undefined behavior)
    std::cout << a[2] << std::endl;  // Accessing out-of-bounds index (undefined behavior)

    std::cout << "Size of array 'a'" << sizeof(a) << std::endl; // Size of the array in bytes
    std::cout << "Address of integer array" << std::endl;
    std::cout << &a[0] << std::endl; // Address of first element
    std::cout << &a[1] << std::endl; // Address of second element
    std::cout << a << std::endl;     // Address of first element (array name as pointer)

    // vector-like array initialization
    std::vector<std::string> cars2 = {"Volvo", "BMW", "Ford", "Mazda"};
    std::cout << "Size of vector 'cars2': " << cars2.size() << std::endl;

    // adding elements to vector
    cars2.push_back("Toyota");
    std::cout << "New size of vector 'cars': " << cars2.size() << std::endl;
    // removing elements from vector
    cars2.pop_back();
    std::cout << "New size of vector 'cars': " << cars2.size() << std::endl;

    // vector erase()
    cars2.erase(cars2.begin() + 1); // Remove the second element (index 1)
    std::cout << "Size of vector 'cars2' after erase: " << cars2.size() << std::endl;

    return 0;
}