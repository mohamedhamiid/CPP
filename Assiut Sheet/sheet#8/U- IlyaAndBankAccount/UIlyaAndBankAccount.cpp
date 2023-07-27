#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int digit[2];
    if (n < 0)
    {
        n = -1 * n;
        for (int i = 0; i < 2; i++)
        {
            digit[i] = n % 10;
            n /= 10;
        }
        if (digit[0] > digit[1])
            n = (n * 10) + digit[1];
        else
            n = (n * 10) + digit[0];

        cout << n * -1;
    }
    else
    {
        cout << n;
    }
}