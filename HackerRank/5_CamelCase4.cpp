#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <numeric>
#include <sstream>
#include <functional>

std::vector<std::string> split(std::string input, std::string delimiter)
// https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::string token;
    std::vector<std::string> result;

    while ((pos_end = input.find(delimiter, pos_start)) != std::string::npos)
    {
        token = input.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        result.push_back(token);
    }
    result.push_back(input.substr(pos_start));
    return result;
}

std::string splitWord(std::string type, std::string word)
{
    std::vector<std::string> words;
    std::string token;
    size_t pos_start = 0;

    word[0] = tolower(word[0]);

    if (type == "M")
    {
        word.erase(word.end() - 2, word.end());
    }

    for (size_t pos_end = 1; pos_end < word.length(); pos_end++)
    {
        if (isupper(word[pos_end]))
        {
            word[pos_end] = tolower(word[pos_end]);
            token = word.substr(pos_start, pos_end - pos_start);
            pos_start = pos_end;
            words.push_back(token);
        }
    }
    words.push_back(word.substr(pos_start));

    std::stringstream result;
    for (auto it = words.begin(); it != words.end(); it++)
    {
        if (it != words.begin())
            result << " ";
        result << *it;
    }
    return result.str();
}

std::string formatCamelCase(std::string type, std::string word)
{
    std::vector<std::string> words = split(word, " ");
    std::string result;
    for (std::string s : words)
    {
        s[0] = toupper(s[0]);
        result += s;
    }

    if (type != "C")
    {
        result[0] = tolower(result[0]);
    }

    if (type == "M")
    {
        result += "()";
    }
    return result;
}

std::string rtrim(const std::string &str)
{
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::vector<std::string> inputs;
    std::string input;
    std::vector<std::string> results;

    while (getline(std::cin, input))
    {
        if (input.empty())
            break;
        inputs.push_back(rtrim(input));
    }

    for (std::string i : inputs)
    {
        std::string result;
        std::vector<std::string> splittedInput = split(i, ";");
        std::string operation = splittedInput[0];
        std::string type = splittedInput[1];
        std::string word = splittedInput[2];

        if (operation == "S")
        {
            result = splitWord(type, word);
        }
        else
        {
            result = formatCamelCase(type, word);
        }
        results.push_back(result);
    }

    std::stringstream output;
    for (auto it = results.begin(); it != results.end(); it++)
    {
        if (it != results.begin())
            output << "\n";
        output << *it;
    }
    std::cout << output.str();
    return 0;
}
