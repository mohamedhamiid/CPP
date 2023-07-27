#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, res;
    cin >> s;
    int length = n;
    for (int i = 0; i < n; i++)
    {
        if (!i || (length % 2 != 0))
        {
            res.push_back(s[i]);
        }
        else
        {
            res.insert(0, string(1, s[i]));
        }
        length--;
    }
    cout
        << res;
}