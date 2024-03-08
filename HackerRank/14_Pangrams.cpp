#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s)
{
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    bool pangram = true;
    for (int i = 0; i < alpha.length(); i++)
    {
        if (s.find(alpha[i]) == string::npos && s.find(toupper(alpha[i])) == string::npos)
        {
            pangram = false;
            break;
        }
    }
    return pangram ? "pangram" : "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
