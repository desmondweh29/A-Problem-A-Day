#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1543/B

void solve()
{
    int n;
    cin >> n;

    vector<int> a (n);
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    long long extra = sum % n;
    long long more = extra; //lanes with extra car
    long long less = n - extra; //lanes with no extra car
    cout << more * less << "\n";
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