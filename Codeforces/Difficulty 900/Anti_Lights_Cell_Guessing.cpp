#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1610/A

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vector<pair<int, int>> input (t);

    for (int i = 0; i < t; i++)
    {
        long long n, m;
        cin >> n >> m;

        input[i].first = n;
        input[i].second = m;
    }

    for (int i = 0; i < t; i++)
    {
        if (input[i].first == 1 && input[i].second == 1)
        {
            cout << "0\n";
        } 
        else if ( input[i].first == 1 ||  input[i].second == 1)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }
}