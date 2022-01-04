#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/158/A

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k; // n = number of participants, k = placement
    cin >> n >> k;

    vector<int> input (n);

    for (int i = 0; i < n; i++)
    {
        int score;
        cin >> score;
        input[i] = score;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (input[i] <= 0 || input[i] > 100)
        {
            break;
        }

        if (input[i] >= input[k - 1])
        {
            count++;
        }
    }

    cout << count;
}