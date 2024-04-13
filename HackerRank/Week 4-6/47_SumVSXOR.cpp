#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'sumXor' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

long sumXor(long n)
{
    // Explanation: 
    // 1. https://www.hackerrank.com/challenges/three-month-preparation-kit-sum-vs-xor/forum/comments/1263729
    // 2. https://www.hackerrank.com/challenges/three-month-preparation-kit-sum-vs-xor/forum/comments/1366221
    // 3. https://www.tutorialspoint.com/cplusplus/cpp_operators.htm

    long num_zeroes = 0;
    while (n > 0)
    {
        if ((n & 1) == 0) // check last bit is 0 or not 
        {
            num_zeroes++;
        }
        n >>= 1; // right shift by 1 
    }
    return pow(2, num_zeroes);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    long n = stol(ltrim(rtrim(n_temp)));

    long result = sumXor(n);

    fout << result << "\n";
    cout << result << "\n";

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
