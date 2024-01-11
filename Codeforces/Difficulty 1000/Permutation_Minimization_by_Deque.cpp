#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1579/E1

void solve()
{
    int n; 
    cin >> n;
    vector <long long> a(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }

    deque<long long> ans;

    for (int i = 0; i < n; i++)
    {
        if (ans.empty())
        {
            ans.push_back(a[i]);
            continue;
        }

        if(ans[0] > a[i])
        {
            ans.push_front(a[i]);
        }
        else
        {
            ans.push_back(a[i]);
        }
    }

    for (auto i : ans)
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