#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/231/A

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n;

    vector<vector<bool>> input(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            bool a;
            cin >> a;
            input[i].push_back(a);
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        
        for (int j = 0; j < 3; j++)
        {
            if (input[i][j] == true)
            {
                k++;
            }
        }

        if (k >= 2)
        {
            count++;
            continue;
        }
    }

    cout << count;
}