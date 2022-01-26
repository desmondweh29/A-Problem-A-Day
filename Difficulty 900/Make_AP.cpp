#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1624/B

void solve()
{
    vector<long long> a(3);
    
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    } 

    for (int i = 0; i < 3; i++)
    {
        vector<long long> t = a;

        if (i == 0)
        {
            long long left = 2 * a[1] - a[2];
            if (left % a[0] == 0 && left > 0)
            {
                t[0] = left;
            }
        }
        else if (i == 1)
        {
            long long mid = (a[0] + a[2]) / 2;
            if (mid % a[1] == 0 && mid > 0)
            {
                t[1] = mid;
            }
        }
        else
        {
            long long right = 2 * a[1] - a[0];
            if (right % a[2] == 0 && right > 0)
            {
                t[2] = right;
            }
        }
        
        if ((t[2] - t[1]) == (t[1] - t[0]))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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