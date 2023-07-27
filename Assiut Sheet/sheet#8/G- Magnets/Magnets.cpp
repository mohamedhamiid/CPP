#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int groups = 1;
    char poles[n][2] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> poles[i][0];
        cin >> poles[i][1];
    }
    for (int i = 1; i < n; i++)
    {
        if (poles[i][0] == poles[i - 1][1])
            groups++;
    }
    cout << groups;
}