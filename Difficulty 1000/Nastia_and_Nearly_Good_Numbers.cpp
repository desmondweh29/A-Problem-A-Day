#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1521/A

void solve()
{
    long long a, b;
    cin >> a >> b;
    //xAB + yA = zA
    //xB + y = z
    //B + 1 = z when x and y = 1

    if (b != 1)
    {
        cout << "YES\n";
        cout << a * b << " " << a << " " << (b + 1) * a << "\n";
    }
    else
    {
        cout << "NO\n";
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