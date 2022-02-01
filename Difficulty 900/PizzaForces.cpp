#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1555/A

void solve()
{
    long long n;
    cin >> n;

    long long div = n / 6;
    long long mod = n % 6;

    if (n <= 6)
    {
        cout << 15;
    }
    else if (mod == 0)
    {
        cout << div * 15;
    }
    else if (mod <= 2)
    {
        cout << (div * 15) + 5;
    }
    else if (mod <= 4)
    {
        cout << (div * 15) + 10;
    }
    else
    {
        div++;
        cout << div * 15;
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