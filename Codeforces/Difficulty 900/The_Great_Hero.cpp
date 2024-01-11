#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1480/B

void solve()
{
    long long A, B;
    int n;
    cin >> A >> B >> n;

    vector<pair<long long, long long>> a (n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (B<=0)
        {
            cout << "NO\n";
            return;
        }

        long long atk = ceil(a[i].second / (double long)A);
        long long def = ceil((double long)B / a[i].first);

        long long round = min(atk, def);
        B -= round * a[i].first;
        a[i].second -= round * A;
    }

    if (a[n-1].second > 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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