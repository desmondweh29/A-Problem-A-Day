#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1607/C

void solve()
{
    int n; 
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << a[0] << "\n";
        return;
    }

    sort(a.begin(), a.end());
    long long minus = a[0];
    long long max = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i] -= minus;
        minus += a[i];

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << max << "\n";
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