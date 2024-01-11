#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1613/B

void solve()
{
    int n; 
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long limit = n / 2;
    long long count = 0;
    int index = 1;
    while (count < limit)
    {
        cout << a[index] << " " << a[0] << "\n";
        count++;
        index++;
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