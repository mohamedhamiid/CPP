#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    int input;
    long long sumA = 0, sumB = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        sumA += input;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> input;
        sumB += input;
    }
    if (sumA == sumB)
        cout << "Yes";
    else
        cout << "No";
}