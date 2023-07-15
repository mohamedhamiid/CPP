#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 3.141592653;
    float radius;
    cin >> radius;

    double result = pi * radius * radius;

    cout << fixed << setprecision(9) << result;
}