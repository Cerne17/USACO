#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &a, int target)
{
    int l, r;
    l = 0;
    r = a.size() - 1;
    int mid;
    while (l < r)
    {
        mid = l+ (r - l) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 4, 7, 10, 50, 112, 1000, 3000, 4661};

    int target = 10;

    cout << binarySearch(arr, target) << endl;
}