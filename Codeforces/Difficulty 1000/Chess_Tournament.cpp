#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1569/B

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2')
        {
            count++;
        }
    }

    if (count == 2 || count == 1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vector<vector<char>> a(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                a[i][j] = 'X';
            }
            else
            {
                a[i][j] = '=';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '2')
        {
            for (int j = i + 1; j < n + i; j++)
            {
                if(s[j%n] == '2')
                {
                    a[i][j % n] = '+';
                    a[j % n][i] = '-';
                    break;
                }
            }
        }
    }

    for (auto i : a)
    {
        for (auto j : i)
        {
            cout << j;
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