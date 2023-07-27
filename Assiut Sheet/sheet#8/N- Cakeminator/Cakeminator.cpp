#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int r, c, res = 0;
    cin >> r >> c;
    char evil = 0;
    char arr[r][c] = {};
    for (int row = 0; row < r; row++)
        for (int col = 0; col < c; col++)
            cin >> arr[row][col];

    for (int row = 0; row < r; row++)
    {
        evil = 0;
        for (int col = 0; col < c; col++)
        {
            if (arr[row][col] == 'S')
            {
                evil = 1;
                break;
            }
        }
        if (!evil)
        {
            res = res + c;
            for (int col = 0; col < c; col++)
                arr[row][col] = '#';
        }
    }

    for (int col = 0; col < c; col++)
    {
        int repeated = 0;
        evil = 0;
        for (int row = 0; row < r; row++)
        {
            if (arr[row][col] == 'S')
            {
                evil = 1;
                break;
            }
            else if (arr[row][col] == '#')
                repeated++;
        }
        if (!evil)
            res = res + r - repeated;
    }

    cout << res;
}