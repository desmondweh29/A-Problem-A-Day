#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1494/A

void solve()
{
    string a;
    cin >> a;
    int n = a.length();

    if (a[0] == a[n - 1])
    {
        cout << "NO\n";
        return;
    }

    int num_a = 0, num_b = 0, num_c = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'A')
        {
            num_a++;
        }
        else if (a[i] == 'B')
        {
            num_b++;
        }
        else
        {
            num_c++;
        }
    }

    if (num_a != (n/2) && num_b != (n/2) && num_c != (n/2))
    {
        cout << "NO\n";
        return;
    }

    vector<char> ans;

    if (num_a == n/2)
    {
        if (a[0] == 'A')
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 'A')
                {
                    ans.push_back(a[i]);
                }
                else
                {
                    if (!ans.empty())
                    {
                        ans.pop_back();
                    }
                    else
                    {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != 'A')
                {
                    ans.push_back(a[i]);
                }
                else
                {
                    if (!ans.empty())
                    {
                        ans.pop_back();
                    }
                    else
                    {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
    }
    else if (num_b == n/2)
    {
        if (a[0] == 'B')
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 'B')
                {
                    ans.push_back(a[i]);
                }
                else
                {
                    if (!ans.empty())
                    {
                        ans.pop_back();
                    }
                    else
                    {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != 'B')
                {
                    ans.push_back(a[i]);
                }
                else
                {
                    if (!ans.empty())
                    {
                        ans.pop_back();
                    }
                    else
                    {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
    }
    else // num_c == n/2
    {
        if (a[0] == 'C')
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 'C')
                {
                    ans.push_back(a[i]);
                }
                else
                {
                    if (!ans.empty())
                    {
                        ans.pop_back();
                    }
                    else
                    {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != 'C')
                {
                    ans.push_back(a[i]);
                }
                else
                {
                   if (!ans.empty())
                    {
                        ans.pop_back();
                    }
                    else
                    {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
    }

    if (ans.empty())
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