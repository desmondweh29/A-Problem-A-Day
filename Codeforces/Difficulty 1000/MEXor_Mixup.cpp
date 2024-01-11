#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1567/B
const int N = 3e5 + 5;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vector<int> xorVal(N, 0);
    for (int i = 1; i < N; i++)
    {
        xorVal[i] = xorVal[i - 1] ^ i;
    }

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mnLen = a;
        int val = xorVal[a - 1];
        if (val != b)
        {
            int req = val ^ b;
            if (req == a)
            {
                cout << mnLen + 2 << "\n";
            }
            else
            {
                cout << mnLen + 1 << "\n";
            }
        }
        else
        {
            cout << mnLen << "\n";
        }
    }
}