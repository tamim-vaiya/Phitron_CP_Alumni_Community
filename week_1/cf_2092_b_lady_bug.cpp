// Problem Link: https://codeforces.com/problemset/problem/2092/B
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
        string a, b;
        cin >> a >> b;
        int cnt1 = 0, cnt2 = 0;
        string str1, str2;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                // odd
                str1.push_back(b[i]);
                str2.push_back(a[i]);
            }
            else
            {
                // even
                str1.push_back(a[i]);
                str2.push_back(b[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (str1[i] == '0')
                cnt1++;
            if (str2[i] == '0')
                cnt2++;
        }
        if (cnt1 >= ceil(n / 2.0) && cnt2 >= (n / 2))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
