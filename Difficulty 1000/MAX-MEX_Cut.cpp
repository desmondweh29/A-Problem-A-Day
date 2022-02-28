#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1566/C

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    vector<vector<int>> a(2, vector<int>(n));
    vector<int> outcome (n);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        a[0][i] = s1[i] - '0';
        a[1][i] = s2[i] - '0';
    }

    for (int i = 0; i < n; i++)
    {
        if (a[0][i] == a[1][i])
        {
            if(a[0][i] == 0)
            {
                outcome[i] = 1;
            }
            else
            {
                outcome[i] = 0;
            }
        }
        else
        {
            count += 2;
            outcome[i] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i==n-2)
        {
            if (outcome[i] == -1)
            {
                continue;
            }
            else if (outcome[i] == 0 && outcome[i + 1] == 1)
            {
                count += 2;
                i++;
                break;
            }
            else if (outcome[i] == 1 && outcome[i + 1] == 0)
            {
                count += 2;
                i++;
                break;
            }
            else
            {
                count += outcome[i];
            }
        }
        else
        {
            if (outcome[i] == -1)
            {
                continue;
            }
            else if (i < n-1 && outcome[i] == 0 && outcome[i + 1] == 1)
            {
                count += 2;
                i++;
            }
            else if (i < n-1 && outcome[i] == 1 && outcome[i + 1] == 0)
            {
                count += 2;
                i++;
            }
            else
            {
                count += outcome[i];
            } 
        }
    }
    cout << count << "\n";
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