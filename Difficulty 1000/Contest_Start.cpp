#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1539/A

void solve()
{
    long long n, x, t;
    cin >> n >> x >> t;

    if(t < x)
    {
        cout << "0\n";
        return;
    }

    long long cc = t / x;

    if (cc >= n - 1)
    {
        long long ans = n - 1;
        ans = (ans * (ans + 1)) / 2;
        cout << ans << "\n";
    }
    else
    {
        long long ans1 = cc;
        ans1 = (ans1 * (ans1 + 1)) / 2;
        long long ans2 = (n - 1 - cc) * cc;
        cout << ans1 + ans2 << "\n";
    }
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