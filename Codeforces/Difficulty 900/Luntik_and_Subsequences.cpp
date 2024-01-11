#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1582/B

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int o = 0;
    int z = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 0)
        {
            z++;
        }
        else if (a[i] == 1)
        {
            o++;
        }
    }

    cout << (long long) (o * (pow(2, z))) << "\n";
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

    return 0;
}