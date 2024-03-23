#include <bits/stdc++.h>

std::string xorOperation(std::string s1, std::string s2)
{
    std::string result = "";
    for (unsigned int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
            result += '0';
        else
            result += '1';
    }
    return result;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::string s1, s2;
    getline(std::cin, s1);
    getline(std::cin, s2);

    std::string result = xorOperation(s1, s2);

    std::cout << result;
    return 0;
}