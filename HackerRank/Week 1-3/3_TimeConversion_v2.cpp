#include <bits/stdc++.h>

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

std::string timeConversion(std::string s)
{
    // Input:  07:05:45PM
    //         0123456789
    // Output: 19:05:45
    std::string result = s;

    if (s.substr(8, 1) == "A")
    {
        if (s.substr(0, 2) == "12")
        {
            result.replace(0, 2, "00");
        }
    }
    else
    {
        if (s.substr(0, 2) != "12")
        {
            int hour = stoi(s.substr(0, 2)) + 12;
            result.replace(0, 2, std::to_string(hour));
        }
    }
    result.erase(8,2); // Removes AM/PM
    return result;
}

int main()
{
    std::string s;
    std::getline(std::cin, s);

    std::string result = timeConversion(s);

    std::cout << result;

    return 0;
}
