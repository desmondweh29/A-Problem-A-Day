#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1559/B

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    string s1 = a;
    string s2 = a;

    if (a[0] == '?')
    {
        s1[0] = 'B';
        s2[0] = 'R';
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] == '?')
        {
            if (s1[i-1] == 'R')
            {
                s1[i] = 'B';
            }
            else
            {
                s1[i] = 'R';
            }
        }

        if (a[i] == '?')
        {
            if (s2[i-1] == 'R')
            {
                s2[i] = 'B';
            }
            else
            {
                s2[i] = 'R';
            }
        }
    }

    int c1 = 0;
    int c2 = 0;

    for (int i = 1; i < n; i++)
    {
        if (s1[i-1] == s1[i])
        {
            c1++;
        }

        if (s2[i-1] == s2[i])
        {
            c2++;
        }
    }

    if (c1 < c2)
    {
        cout << s1 << "\n";
    }
    else
    {
        cout << s2 << "\n";
    }
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}