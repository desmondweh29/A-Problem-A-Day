#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1607/B

int main() 
{
    ios::sync_with_stdio(0);  
    cin.tie(0);  
    
    int t;
    cin >> t;

    vector<long long> x(t); // x = initial position
    vector<long long> n(t); // n = number of jumps

    for (int j = 0; j < t; j++)
    {
        long long temp_x, temp_n;
        cin >> temp_x >> temp_n;
        x[j] = temp_x;
        n[j] = temp_n;
    }

    vector<long long> result (t);

    for (int j = 0; j < t; j++)
    {
        long long sum = 0;

        if (n[j]%4 == 1)
        {
            sum = -n[j];
        }
        else if (n[j]%4 == 2)
        {
            sum = 1;
        }
        else if (n[j]%4 == 3)
        {
            sum = n[j] + 1;
        }

        if (x[j]%2 == 0)
        {
            result[j] = x[j] + sum;
        }
        else
        {
            result[j] = x[j] - sum;
        }
    }

    for (auto i : result)
    {
        cout << i << "\n";
    }
}