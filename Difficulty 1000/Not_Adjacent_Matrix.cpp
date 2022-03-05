#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1520/C

void solve()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << -1 << "\n";
        return;
    }

    vector<vector<int>> a(n, vector<int>(n));

    if (n%2 == 1)
    {
        int num = 1;
        int x = 0;
        while (num <= (n * n))
        {
            int i = x / n;
            i = i % n;
            int j = x % n;
            a[i][j] = num++;
            x += 2;
        }
    }
    else
    {
        int num = 1;
        for (int i = 0; i < n; i ++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j += 2)
                {
                    a[i][j] = num++;
                }
            }
            else
            {
                for (int j = 1; j < n; j += 2)
                {
                    a[i][j] = num++;
                }
            }
        }

        for (int i = 0; i < n; i ++)
        {
            if (i % 2 == 1)
            {
                for (int j = 0; j < n; j += 2)
                {
                    a[i][j] = num++;
                }
            }
            else
            {
                for (int j = 1; j < n; j += 2)
                {
                    a[i][j] = num++;
                }
            }
        }
    }

    for (auto i : a)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
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