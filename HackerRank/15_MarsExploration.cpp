#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s)
{
    int result = 0;
    int pos = 0;
    string msg = "SOS";

    for (int i = 0; i < s.length(); i++)
    {
        // if (pos >= msg.length())
        if (i % 3 == 0)
            pos = 0;

        if (s[i] != msg[pos])
        {
            result++;
        }
        pos++;
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
