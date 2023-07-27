#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int n, m;
    bool isPrime = false;
    cin >> n >> m;
    int prime[] = {
        2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29,
        31,
        37,
        41,
        43,
        47};
    for (int i = 0; i < 15; i++)
    {
        if (n == prime[i])
        {
            if (m == prime[i + 1])
                isPrime = true;
            break;
        }
    }
    if (isPrime)
        cout << "YES";
    else
        cout << "NO";
}