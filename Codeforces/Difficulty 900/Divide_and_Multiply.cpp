#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1609/A

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<long long> result;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<long long> input (n);

        for (int j = 0; j < n; j++)
        {
            int e;
            cin >> e;
            input[j] = e;
        }

        int count = 0;
        long long mx = 0;
        int mxI;

        for (int j = 0; j < n; j++)
        {
            if (input[j]%2 == 0)
            {
                while (input[j]%2 ==0)
                {
                    input[j] /= 2;
                    count++;    
                }
            }

            if (max(mx, input[j]) == mx)
            {
                continue;
            }
            else
            {
                mx = max(mx, input[j]);
                mxI = j;
            }
        }

        long long ans = mx *powl(2, count);

        for (int j = 0; j < n; j++)
        {
            if (j == mxI)
            {
                continue;
            }
            ans += input[j];
        }

        result.push_back(ans);
    }

    for (auto j : result )
    {
        cout << j << "\n";
    }   
}

