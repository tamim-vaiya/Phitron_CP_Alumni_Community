// Problem link: https://codeforces.com/problemset/problem/2091/D
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll l = 0, r = m;
        ll mid;
        while (l + 1 < r)
        {
            mid = (l + r) / 2;
            if ((m / (mid + 1) * mid + m % (mid + 1)) * n >= k)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << r << nl;
    }

    return 0;
}