// Problem Link: https://codeforces.com/problemset/problem/2091/B

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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        reverse(a, a + n);

        int ans = 0;
        for (int i = 0, cnt = 1; i < n; i++, cnt++)
        {
            if (a[i] * cnt >= x)
            {
                ans++;
                cnt = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}