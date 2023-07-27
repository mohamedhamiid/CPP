#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string a, b;
    int seqA = 1, seqB = 1;
    cin >> a >> b;

    if (a == b)
        cout << -1;
    else if (a.length() > b.length())
        cout << a.length();
    else if (a.length() <= b.length())
        cout << b.length();
}