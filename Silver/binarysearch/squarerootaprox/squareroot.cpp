#include <bits/stdc++.h>

using namespace std;

/*
This procedure works for any monotonic functions.
The function f(x) is to be changed for the inverse function for the application of choice
*/

long long f(int x)
{ // This is the inverse function for sqrt
    return (long long)x * x;
}

int square_root(int x)
{
    int left = 0, right = x;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (f(mid) <= x)
        {
            left = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left; // Found the square root
}

int main()
{
    int eg = 123;
    cout << "Finding the sqrt for " << eg << ": " << square_root(eg);
}