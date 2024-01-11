#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1634/C

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> a(n, vector<int>(k));

    if (k==1)
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << "\n";
        }
        cout << "\n";
        return;
    }

    int odd = 1;
    int even = 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i%2 == 0)
            {
                a[i][j] = even;
                even += 2;
            }
            else
            {
                a[i][j] = odd;
                odd += 2;
            }
        }
    }

    if ((odd-2) > (n*k) || (even-2) > (n*k))
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        for (auto i : a)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << "\n";
        }
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