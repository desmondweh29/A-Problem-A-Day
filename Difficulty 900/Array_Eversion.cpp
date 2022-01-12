#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1585/B

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vector<int> input_n (t);
    vector<vector<long long>> input_a(t);

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        long long a;

        for (int j = 0; j < n; j++)
        {
            cin >> a;
            input_a[i].push_back(a);
        }
    }

    for (int i = 0; i < t; i++)
    {
        bool arranged = false;
        int size = input_a[i].size();
        long long x = input_a[i][size - 1];

        while (!arranged)
        {
            // vector <long long> gt;
            // vector<long long> lt;

            for ()


        }

    }
}