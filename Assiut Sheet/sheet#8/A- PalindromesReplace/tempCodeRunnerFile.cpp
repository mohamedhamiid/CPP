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
        if (input[i] == input[input.length() - i] || input[i] != '?' || input[input.length() - i] != '?')
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
            if (input[i] == '?')
                input[i] = input[input.length() - i - 1];
        cout << input;
    }
    else
        cout << "-1";
}