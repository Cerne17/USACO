#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define sz(x) (int)size(x)

using ll = long long;
using vec = vector<int>;

int main()
{
    freopen("subarray.in", "r", stdin);
    freopen("subarray.out", "w", stdout);

    int num, X;
    cin >> num >> X;

    vec arr(num);
    for (int &x : arr)
    {
        cin >> x;
    }

    ll prefSum = 0;
    ll ans = 0;
    map<ll, int> sums;
    sums[0] = 1;

    for (int x : arr)
    {
        prefSum += x;

        ans += sums[prefSum - X];

        sums[prefSum]++;
    }

    cout << ans << endl;
}