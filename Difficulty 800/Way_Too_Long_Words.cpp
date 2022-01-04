#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/71/A

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string>input (n);

    for (int i = 0; i < n; i++)
    {
        string data;
        cin >> data;
        input[i] = data;
    }

    for (int i = 0; i < n; i++)
    {
        if (input[i].size() > 10)
        {
            input[i] = input[i][0] + to_string(input[i].size() - 2) + input[i][input[i].size() - 1];
        }
    }

    for (auto i : input)
    {
        cout << i << "\n";
    }
}