#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1550/B

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int ans = a * n;

    if (b > 0)
    {
        ans += b * n;
    }
    else
    {
        int group = 1;
        for (int i = 0; i < n - 1; i ++)
        {
            if (s[i] != s[i+1])
            {
                group++;
            }
        }
        ans += ((group / 2) + 1) * b;
    }
    cout << ans << "\n";
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}