#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int mark = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (row % 2 == 0)
            {
                arr[row][col] = '#';
            }
            else if (mark % 2 == 0)
            {
                if (col == m - 1)
                    arr[row][col] = '#';
                else
                    arr[row][col] = '.';
            }
            else
            {
                if (col == 0)
                    arr[row][col] = '#';
                else
                    arr[row][col] = '.';
            }
        }
        if (row % 2 == 0)
            mark++;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
            cout << arr[row][col];
        cout << endl;
    }
}