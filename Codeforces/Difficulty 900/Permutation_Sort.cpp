#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1525/B

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool ordered = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != i + 1)
        {
            ordered = false;
        }
    }

    if (!ordered)
    {
        if (a[0] == 1 || a[n - 1] == n)
        {
            cout << 1;
        }
        else if (a[0] == n && a[n - 1] == 1)
        {
            cout << 3;
        }
        else
        {
            cout << 2;
        }
    }
    else
    {
        cout << 0;
    }
    cout << "\n";
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