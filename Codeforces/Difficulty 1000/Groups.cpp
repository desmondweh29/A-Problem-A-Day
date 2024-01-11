#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1598/B

void solve()
{
    long long n;
    cin >> n;

    vector<vector<long long>> a(n, vector<long long>(5));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    bool ok = false;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            int first = 0, second = 0, both = 0;
            for (int k = 0; k < n; k++)
            {
                if (a[k][i] == 1 && a[k][j] == 1)
                {
                    both++;
                }
                else if (a[k][i] == 1)
                {
                    first++;
                }
                else if (a[k][j] == 1)
                {
                    second++;
                }
            }
            long long needed_First = n / 2 - first;
            long long needed_Second = n / 2 - second;
            if (needed_First >= 0 && needed_Second >=0 && both == needed_First+needed_Second)
            {
                ok = true;
                break;
            }
            if (ok)
            {
                break;
            }
        }
    }
    if (ok)
    {

        cout << "YES\n";
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