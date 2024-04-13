#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'separateNumbers' function below.
 *
 * The function accepts STRING s as parameter.
 */

void separateNumbers(string s)
{
    int numberSize = 1;

    for (unsigned int i = numberSize; i <= s.size() / 2; i++)
    {
        long long num = stoll(s.substr(0, i));
        auto first_num = num;

        string comparing_s = "";
        while (comparing_s.size() < s.size())
            comparing_s.append(to_string(num++));

        if (s == comparing_s)
        {
            cout << "YES " << first_num << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

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
