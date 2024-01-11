#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1613/A

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;

    vector <char> result(t);

    for (int i = 0; i < t; i++)
    {
        string x1, x2;
        int p1, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        if ((x1.size() + p1) > (x2.size() + p2))
        {
            result[i] = '>';
        }
        else if ((x1.size() + p1) < (x2.size() + p2))
        {
            result[i] = '<';
        }
        else
        {
            while (x1.size() > x2.size())
            {
                x2 += "0";
            }

            while (x1.size() < x2.size())
            {
                x1 += "0";
            }

            if (x1 > x2)
            {
                result[i] = '>';
            }
            else if (x1 < x2)
            {
                result[i] = '<';
            }
            else
            {
                result[i] = '=';
            }
        }
    }

    for (auto i : result)
    {
        cout << i << "\n";
    }
}