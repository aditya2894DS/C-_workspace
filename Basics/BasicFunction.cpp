//
// Created by rklad on 10-09-2025.
//
# include <iostream>

int maximum(int x, int y)
{
    if (x>y)
        return x;
    return y;
}

int main()
{
    int x = 30;
    int y = 50;
    int max = maximum(x, y);
    std::cout << max << std::endl;
    return 0;
}