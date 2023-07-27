#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int n, res = 0, out = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long input;
        cin >> input;
        if (input > 0)
            res = 0;
        res += input;
        if (res < 0)
            out++;
    }
    cout << out;
}