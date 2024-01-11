#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1559/A

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long ans = a[0];

    for (int i = 1; i < n; i++)
    {
        ans = ans & a[i];
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