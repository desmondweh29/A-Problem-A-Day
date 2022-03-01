#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1562/B

bool isPrime(int n)
{
    if (n == 1 || n == 0)
    {
        return false;
    }

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    long long k;
    cin >> k;
    string s;
    cin >> s;
    for (int i = 0; i < k; i++)
    {
        if (s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7')
        {
            cout << "1\n" << s[i] << "\n";
            return;
        }
    }

    int n;
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            string temp = s.substr(i, 1) + s.substr(j, 1);
            n = stoi(temp);
            if (!isPrime(n))
            {
                cout << "2\n" << n << "\n";
                return;
            }
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