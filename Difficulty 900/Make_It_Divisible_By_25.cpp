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
        
        bool div = false;
        int count = 0;

        while (!div)
        {
            int last2 = (input[i].size()) - 2;
            string check = input[i].substr(last2, 2);

            if (check == "00" || check == "25" || check == "50" || check == "75")
            {
                div = true;
            }
            else
            {
                if (check[1] == '0' || check[1] == '5')
                {
                    if (check == "05" || check == "55")
                    {
                        input[i].pop_back();
                    }
                    else
                    {
                        input[i].erase(input[i].begin() + last2);
                    }
                    count++;
                }
                else
                {
                    input[i].pop_back();
                    count++;
                }
                
            }
        }

        result[i] = count;
    }

    for (auto i : result)
    {
        cout << i << "\n";
    }
}