#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    string s;
    int rotation = 0;
    cin >> s;
    for (int i = 0; i <= s.length() - 1; i++)
    {
        int diff;
        if (!i)
            diff = 'a' - s[i];
        else
            diff = s[i] - s[i - 1];

        if (abs(diff) < 13)
            rotation += abs(diff);
        else
            rotation += (26 - abs(diff));
    }
    cout << rotation;
}