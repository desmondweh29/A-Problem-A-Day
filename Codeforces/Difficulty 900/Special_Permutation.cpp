#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1612/B

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vector<vector<int>> input (t);

    for (int i = 0; i < t; i++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        input[i].push_back(n);
        input[i].push_back(a);
        input[i].push_back(b);
    }

    vector<vector<int>> result (t);

    for (int i = 0; i < t; i++)
    {
        int count, num;
 
        result[i].push_back(input[i][1]);
        count = ((input[i][0]) / 2) - 1;
        num = input[i][0];
        while (count)
        {
            if (num != input[i][2])
            {
                result[i].push_back(num);
                count--;
            }
            num--;
        }

        result[i].push_back(input[i][2]);
        count = ((input[i][0]) / 2) - 1;
        num = 1;
        while (count)
        {
            if (num != input[i][1] )
            {
                result[i].push_back(num);
                count--;
            }
            num++;
        }

        count = ((input[i][0]) / 2);
        for (int j = 1; j < count; j++)
        {
            if (result[i][0] >= result[i][j])
            {
                result[i].clear();
                result[i].push_back(-1);
                break;
            }

            if (result[i][0 + count] <= result[i][j + count])
            {
                result[i].clear();
                result[i].push_back(-1);
                break;
            }
        }
    }

    for (auto i : result)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}