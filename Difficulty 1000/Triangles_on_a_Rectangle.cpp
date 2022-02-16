#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1620/B

void solve()
{
    long long w, h;
    cin >> w >> h;

    long long k;
    cin >> k;
    vector<long long> pt_h1 (k);
    for (int i = 0; i < k; i++)
    {
        cin >> pt_h1[i];
    }

    cin >> k;
    vector<long long> pt_h2 (k);
    for (int i = 0; i < k; i++)
    {
        cin >> pt_h2[i];
    }

    cin >> k;
    vector<long long> pt_v1 (k);
    for (int i = 0; i < k; i++)
    {
        cin >> pt_v1[i];
    }

    cin >> k;
    vector<long long> pt_v2 (k);
    for (int i = 0; i < k; i++)
    {
        cin >> pt_v2[i];
    }

    long long max_h = max(pt_h1[(pt_h1.size() - 1)] - pt_h1[0], pt_h2[(pt_h2.size() - 1)] - pt_h2[0]);
    long long max_v = max(pt_v1[(pt_v1.size() - 1)] - pt_v1[0], pt_v2[(pt_v2.size() - 1)] - pt_v2[0]);

    long long a1 = max_h * h;
    long long a2 = max_v * w;

    cout << max(a1, a2) << "\n";
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