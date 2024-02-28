#include <bits/stdc++.h>

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

std::string timeConversion(std::string s)
{
    char buffer[std::size(s)];

    struct std::tm timeInfo = {};
    std::istringstream ss(s);
    ss >> std::get_time(&timeInfo, "%I:%M:%S%p");
    strftime(buffer, sizeof(buffer), "%H:%M:%S", &timeInfo);
    // strftime(buffer, sizeof(buffer), "%T", &timeInfo);
    return std::string(buffer);
}

int main()
{
    std::string s;
    std::getline(std::cin, s);

    std::string result = timeConversion(s);

    std::cout << result;

    return 0;
}
