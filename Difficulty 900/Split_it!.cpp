#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1496/A

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (k == 0)
    {
        cout << "YES";
    }
    else
    {
        bool pass = true;
        int l_position = s.length() - 1;

        for (int i = 0; i <= k; i++)
        {
            if (i == k)
            {
                if (i > l_position)
                {
                    pass = false;
                }
                break;
            }

            if (s[i] == s[l_position])
            {
                l_position--;
                continue;
            }
            else
            {
                pass = false;
                break;
            }
        }

        if (pass)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
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