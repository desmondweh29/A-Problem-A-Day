#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'sansaXor' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int sansaXor(vector<int> arr)
{
    // Array with even number of elements will always result in 0
    // Only do XOR operation with elements appear odd number of time

    if (arr.size() % 2 == 0)
        return 0;

    int result = 0;

    for (int i = 0; i < arr.size(); i += 2)
    {
        result ^= arr[i];
    }
    return result;

    // Time exceeded solution
    // for (int i = 1; i <= arr.size(); i++)
    // {
    //     for (int j = 0; j + i <= arr.size(); j++)
    //     {
    //         for (int k = 0; k < i; k++)
    //         {
    //             result ^= arr[j + k];
    //         }
    //     }
    // }
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

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split(rtrim(arr_temp_temp));

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        int result = sansaXor(arr);

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
