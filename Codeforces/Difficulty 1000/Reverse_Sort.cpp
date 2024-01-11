#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1605/B

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string sorted;
    sorted = s;
    sort(s.begin(), s.end());
    int count = 0;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != sorted[i])
        {
            count++;
            ans.push_back(i+1);
        }
    }

    if (count == 0)
    {
        cout << "0\n";
        return;
    }

    cout << "1\n" <<count << " ";
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