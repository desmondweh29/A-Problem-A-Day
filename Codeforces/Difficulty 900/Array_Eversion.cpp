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
    vector<int> result(t);

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
        long long max = 0;
        int count = 0;
        for (int j = input_a[i].size() - 1; j >= 0; j--)
        {
            if (input_a[i][j] > max)
            {
                max = input_a[i][j];
                count++;
            }
        }
        result[i] = count - 1;
    }

    for (auto i : result)
    {
        cout << i << "\n";
    }
}