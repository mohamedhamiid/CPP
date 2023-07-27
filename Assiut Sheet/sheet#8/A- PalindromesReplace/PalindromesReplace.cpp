#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string input;
    char isPalindrome = 1;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == input[input.length() - i - 1] || input[i] == '?' || input[input.length() - i - 1] == '?')
            continue;
        else
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        for (int i = 0; i < input.length(); i++)
            if (input[i] == '?' && input[input.length() - i - 1] != '?')
                input[i] = input[input.length() - i - 1];
            else if (input[i] == '?' && input[input.length() - i - 1] == '?')
            {
                input[i] = 'a';
                input[input.length() - i - 1] = 'a';
            }
        cout << input;
    }
    else
        cout << "-1";
}