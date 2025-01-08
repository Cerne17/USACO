#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)size(x)

using ll = long long;
using vv = vector<int>;

int main()
{
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int N, Q;
    cin >> N >> Q;

    vv p1(N + 1), p2(N + 1), p3(N + 1);
    for (int i = 0; i < N; i++)
    {
        p1[i + 1] = p1[i];
        p2[i + 1] = p2[i];
        p3[i + 1] = p3[i];

        int type;
        cin >> type;

        if (type == 1)
            p1[i + 1]++;
        else if (type == 2)
            p2[i + 1]++;
        else if (type == 3)
            p3[i + 1]++;
    }

    for (int i = 0; i < Q; i++)
    {
        int a, b;
        cin >> a >> b;

        cout << p1[b] - p1[a - 1] << ' '
             << p2[b] - p2[a - 1] << ' '
             << p3[b] - p3[a - 1] << '\n';
    }
}