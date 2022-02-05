#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1535/B

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> even;
    vector<long long> odd;

    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }

    a.clear();

    for (int i = 0; i < even.size(); i++)
    {
        a.push_back(even[i]);
    }
    for (int i = 0; i < odd.size(); i++)
    {
        a.push_back(odd[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (gcd(a[i], 2*a[j]) > 1)
            {
                count++;
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