#include <bits/stdc++.h> // This header file includes every standard library.

int main()
{
    std::string str = "Hello, World!";
    std::cout << str << std::endl; // Output the string

    // Accessing characters in the string
    std::cout << "First character: " << str[0] << std::endl;             // H
    std::cout << "Last character: " << str[str.size() - 1] << std::endl; // !

    // Modifying characters in the string
    str[7] = 'w';
    std::cout << "Modified string: " << str << std::endl; // Hello, world!

    // String concatenation
    std::string str2 = " How are you?";
    std::string combined = str + str2;
    std::cout << "Concatenated string: " << combined << std::endl;

    // String length
    std::cout << "Length of combined string: " << combined.size() << std::endl;

    // Substring
    std::string sub = combined.substr(0, 5);        // First 5 characters
    std::cout << "Substring: " << sub << std::endl; // Hello

    // Finding a substring
    size_t pos = combined.find("world");
    if (pos != std::string::npos)
        std::cout << "'world' found at position: " << pos << std::endl;
    else
        std::cout << "'world' not found" << std::endl;

    // Erasing a part of the string
    combined.erase(5, 7); // Remove " world"
    std::cout << "After erasing: " << combined << std::endl;

    // Replacing a part of the string
    combined.replace(5, 4, " everyone"); // Replace " How" with " everyone"
    std::cout << "After replacing: " << combined << std::endl;

    return 0;
}