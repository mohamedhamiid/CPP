#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int arr[] = {4,
                 7,
                 47,
                 44,
                 77,
                 74,
                 474,
                 444,
                 477,
                 447,
                 744,
                 747,
                 774,
                 777};
    int n;
    cin >> n;
    char flag = 1;
    for (int i = 0; i < 14; i++)
        if (n % arr[i] == 0)
        {
            cout << "YES";
            flag = 0;
            break;
        }
    if (flag)
        cout << "NO";
}