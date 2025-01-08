#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/contest/1201/problem/C

int last_true(int low, int high, function<bool(int)> f)
{
    low--;
    while (low < high)
    {
        int mid = low + (high - low + 1) / 2;
        if (f(mid))
        {
            low = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    // freopen("median.in", "r", stdin);
    // freopen("median.out", "w", stdout);

    int size, max_ops;

    cin >> size >> max_ops;

    vector<int> grades(size);

    for (int &i : grades)
        cin >> i;

    sort(grades.begin(), grades.end());
    cout << last_true(1, 2e9, [&](int x)
                      {
        long long ops_needed = 0;

        for (int i= (size-1) / 2; i<size; i++) {
            ops_needed += max(0, x-grades[i]);
        }
        return ops_needed <= max_ops; })
         << endl;
}