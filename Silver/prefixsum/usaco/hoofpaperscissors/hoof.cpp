#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vec = vector<int>;

int main()
{
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);

    /*
    Winning cases:
    Gesture Made H P S
    Wins Gesture S H P

    If both hands are the same, then it's a tie
    */

    int num_hands;
    cin >> num_hands;

    char s;

    vec hpref(num_hands + 1), ppref(num_hands + 1), spref(num_hands + 1);

    for (int i = 1; i <= num_hands; i++)
    {
        hpref[i] += hpref[i - 1];
        ppref[i] += ppref[i - 1];
        spref[i] += spref[i - 1];
        cin >> s;
        if (s == 'H')
        {
            hpref[i]++;
        }
        else if (s == 'P')
        {
            ppref[i]++;
        }
        else
        {
            spref[i]++;
        }
    }

    int max_wins;
    for (int i = 0; i <= num_hands; i++)
    {
        int firstMax = max(ppref[i], max(hpref[i], spref[i]));
        int lastMax = max({ppref[num_hands] - ppref[i], hpref[num_hands] - hpref[i], spref[num_hands] - spref[i]});
        max_wins = max({max_wins, firstMax + lastMax});
    }
    cout << max_wins << endl;
}