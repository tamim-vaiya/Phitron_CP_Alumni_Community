// https://codeforces.com/problemset/problem/2092/A

// gcd(x,y) = gcd(x, |y - x|)

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
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            (x > mx) ? mx = x : mx;
            (x < mn) ? mn = x : mn;
        }
        cout << mx - mn << nl;
    }

    return 0;
}