#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1501/B

void solve()
{
    long long n;
    cin >> n;

    vector<int> a(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> ans(n);

    long long endpt = n - 1;
    long long count = 0;

    for (long long i = n - 1; n >= 0; i--)
    {
        if (a[i] != 0)
        {
            long long new_endpt = i + 1 - a[i];
            
            if (new_endpt < 0)
            {
                for (long long j = i; j >= 0; j--)
                {
                    ans[j] = 1;
                }
                break;
            }
            else if (new_endpt <= endpt)
            {
                endpt = new_endpt;
                count = a[i];
            }
        }      

        if (count != 0)
        {
            ans[i] = 1;
            count--;
        }
        else
        {
            ans[i] = 0;
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