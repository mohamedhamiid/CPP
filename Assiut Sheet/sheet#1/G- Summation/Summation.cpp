#include <iostream>

using namespace std;

int main()
{
    long long x, res = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
        res = res + i;
    cout << res;
}