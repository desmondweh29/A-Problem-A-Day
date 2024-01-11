#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1632/B

void solve()
{
    int n;
    cin >> n;

    vector<long long> a;
    bool isAdded = false;

    for (int i = n - 1; i >= 1; i--)
    {
        a.push_back(i);
        if (__builtin_popcount(i) == 1 && !isAdded)
        {
            a.push_back(0);
            isAdded = true;
        }
    }

    for (auto i : a)
    {
        cout << i << " ";
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