#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1611/C

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (a[0] != n && a[n-1] != n)
    {
        cout << "-1\n";
        return;
    }

    if (n == 1)
    {
        cout << a[0] << "\n";
        return;
    }

    reverse(a.begin(), a.end());
    for (auto i : a)
    {
        if (i != n)
        {
            cout << i << " ";
        }
    }
    cout << n << "\n";
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