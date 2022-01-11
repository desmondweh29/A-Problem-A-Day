#include <bits/stdc++.h>
using namespace std;

// Question: 

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vector<string> input(t);
    vector<int> result(t);

    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        input[i] = str;
    }

    for (int i = 0; i < t; i++)
    {
        int size = input[i].size();
        int ans = size;

        for (int j = 0; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                int num = (input[i][j] - '0') * 10 + (input[i][k] - '0'); // - '0' is to convert char to int (ASCII code of '0' is 48), int x = (int)character - 48;
                if (num%25 == 0)
                {
                    result[i] = min(result[i], (k - j - 1) + (size - 1 - k));
                }
            }
        }
    }

    for (auto i : result)
    {
        cout << i << "\n";
    }
}