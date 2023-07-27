#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string sorted;
    for (int i = 0; i < s.length(); i += 2)
    {
        sorted.push_back(s[i]);
    }
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.length(); i++)
    {
        cout << sorted[i];
        if (i != sorted.length() - 1)
            cout << "+";
    }
}