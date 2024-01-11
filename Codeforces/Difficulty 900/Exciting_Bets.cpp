#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1543/A

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "0 0\n";
        return;
    }

    long long ex = abs (a - b);
    long long plus = a % ex;
    long long minus = ex - a % ex;
    cout << ex << " " << min (plus, minus) << "\n";
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