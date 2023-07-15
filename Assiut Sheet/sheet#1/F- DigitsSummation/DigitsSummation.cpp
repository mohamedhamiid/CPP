#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    int d1 = x % 10;
    int d2 = y % 10;

    cout << d1 + d2;
}