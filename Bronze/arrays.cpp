#include <vector> // Dynamic Arrays
#include <iostream>

int main()
{
    std::vector<int> v; // Creates a vector of length = 5; initializes it's elements to be 0;
    for (int i = 0; i < 4; i++)
        v.push_back(i);

    // Slow Iteration through an array
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << "\n";
    }
    // Fast Iteration through an array
    for (auto x : v)
    {
        std::cout << x << "\n";
    }

    return 0;
}