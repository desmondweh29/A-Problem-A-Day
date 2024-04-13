#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'misereNim' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY s as parameter.
 */

string misereNim(vector<int> s)
{
    // In NIM game, there is one winning formula. And that formula says - 
    //      If the NimSum of the sizes of the piles of stones is 0,
    //      that means the first player will always be the one that removes the last stone. 
    //      Source -https://en.wikipedia.org/wiki/Nim#Proof_of_the_winning_formula

    // Here, NimSum means the XOR of each value in the given array of piles of stones.

    // Finally, we also need to take care of cases where each pile of stone has 1 stone. 
    //      In that case, we need to forget about NimSum as it will always be 0.
    //      In that case, we need to look at the odd or even length of the array. 
    //      If the length of array is even, that means second will always be the one to remove the last stone. 

    int sum = accumulate(s.begin(), s.end(), 0);

    bool allElementsAreOne = sum == s.size() ? true : false;

    if (allElementsAreOne)
    {
        if (s.size() % 2 == 0)
            return "First";
        else
            return "Second";
    }
    else
    {
        int result = 0;
        for (int i : s)
            result ^= i;

        if (result == 0)
            return "Second";
        else
            return "First";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string s_temp_temp;
        getline(cin, s_temp_temp);

        vector<string> s_temp = split(rtrim(s_temp_temp));

        vector<int> s(n);

        for (int i = 0; i < n; i++)
        {
            int s_item = stoi(s_temp[i]);

            s[i] = s_item;
        }

        string result = misereNim(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
