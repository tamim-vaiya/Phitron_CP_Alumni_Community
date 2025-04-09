// Problem link: https://codeforces.com/problemset/problem/2091/C
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << -1 << nl;
        }
        else
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << ' ';
            }
            cout << nl;
        }
    }

    return 0;
}