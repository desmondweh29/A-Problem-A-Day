#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1622/B

void solve()
{
    int n;
    cin >> n;
    map<int, int> map;
    vector<int> p(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        map[p[i]] = i;
    }
    string s;
    cin >> s;

    vector<int> like;
    vector<int> dislike;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            like.push_back(p[i]);
        }
        else
        {
            dislike.push_back(p[i]);
        }
    }

    sort(like.begin(), like.end(), greater<int>());
    sort(dislike.begin(), dislike.end(), greater<int>());
    vector<int> ans(n);

    for (int i = 0; i < like.size(); i++)
    {
        ans[map[like[i]]] = n--;
    }
    for (int i = 0; i < dislike.size(); i++)
    {
        ans[map[dislike[i]]] = n--;
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