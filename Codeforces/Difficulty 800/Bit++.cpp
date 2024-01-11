#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/282/A

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        string op;
        cin >> op;

        if (op == "X++")
        {
            x++;
            continue;
        } 
        
        if (op == "++X")
        {
            ++x;
            continue;
        }

        if (op == "X--")
        {
            x--;
            continue;
        }

        if (op == "--X")
        {
            --x;
            continue;
        }
    }

    cout << x;
}