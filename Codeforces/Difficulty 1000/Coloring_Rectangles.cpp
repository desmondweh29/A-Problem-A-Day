#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1584/B

void solve()
{
    long long n, m;
    cin >> n >> m;

    long long total = n * m;
    long long r = total % 3;

    if (r == 0)
    {
        cout << total / 3 << "\n";
    }
    else 
    {
        cout << (total / 3) + 1 << "\n";
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