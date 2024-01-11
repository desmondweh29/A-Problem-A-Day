#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1486/A

void solve()
{
    int n;
    cin >> n;
    vector<long long> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    long long extra = 0;

    for (int i = 0; i < n; i++)
    {
        if (h[i] > i)
        {
            extra += (h[i] - i);
        }
        else if (h[i] + extra >= i)
        {
            extra -= (i - h[i]);
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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