#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1593/C

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> x(k);
    for (int i = 0 ; i < k ; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());

    long long cat = 0;
    long long saved = 0;

    for (int i = k - 1; i >= 0; i--)
    {
        long long diff = n - x[i];
        cat += diff;
        if (cat < n)
        {
            saved++;
        }
        else
        {
            break;
        }
    }

    cout << saved << "\n";
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