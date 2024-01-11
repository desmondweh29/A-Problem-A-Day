#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1606/A

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vector<string> input(t);

    for (int i = 0 ; i < t; i++)
    {
        string str;
        cin >> str;
        input[i] = str;
    }

    for (int i = 0; i < t; i++)
    {
        if (input[i][0] != input[i][input[i].length() - 1])
        {
            input[i][0] = input[i][input[i].length() - 1];
        }
    }

    for (auto i : input)
    {
        cout << i << "\n";
    }
}