#include <iostream>
int main()
{
    int i = 0;
    // while loop (entry controlled loop i.e. condition checked before loop body)
    while (i < 5)
    {
        std::cout << "Value of i in while loop: " << i << std::endl;
        i++;
    }

    // do-while loop (exit controlled loop i.e. condition checked after loop body)
    int j = 0;
    do
    {
        std::cout << "Value of j in do-while loop: " << j << std::endl;
        j++;
    } while (j < 5);

    // for loop (entry controlled loop)
    for (int k = 0; k < 5; k++)
    {
        std::cout << "Value of k in for loop: " << k << std::endl;
    }

    return 0;
}