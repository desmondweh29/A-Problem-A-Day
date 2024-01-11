#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1617/B

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vector<long long> input (t);
    for (int i = 0; i < t; i++)
    {
        long long n; 
        cin >> n;
        input[i] = n;
    }

    long long a, b;
    long long c = 1;

    for (int i = 0; i < t; i++)
    {
        for (int j = 1; j+=2; j < input[i])
        {
            if (gcd(j, input[i] - j - 1) == 1)
            {
                a = j;
                break;
            }       
        }
        b = input[i] - a - c;
        cout << a << " " << b << " " << c << "\n";
    }
}