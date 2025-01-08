#include <bits/stdc++.h>

using namespace std;

#define sz(x) (int)size(x)

const int MOD = 7;

using ll = long long;
using vecint = vector<int>;

int main()
{
    freopen("subsequence.in", "r", stdin);
    freopen("subsequence.out", "w", stdout);

    int cowNum;
    cin >> cowNum;

    int longest = 0;
    // first[i] stores the index of the first time a prefix sum % 7 == i
    vecint first(MOD, -1);
    first[0] = 0;

    int curRemainder = 0;
    for (int i = 1; i <= cowNum; i++)
    {
        int cow;
        cin >> cow;

        curRemainder = (curRemainder + cow) % MOD;
        if (first[curRemainder] == -1)
            first[curRemainder] = i;
        else
        {
            longest = max(longest, i - first[curRemainder]);
        }
    }
    cout << longest << endl;
}