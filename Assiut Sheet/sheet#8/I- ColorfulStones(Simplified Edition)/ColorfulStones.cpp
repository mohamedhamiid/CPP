#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int currentPos = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[currentPos])
            currentPos++;
    }
    cout << currentPos + 1; // 1-based
}