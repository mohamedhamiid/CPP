#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    bool rated = false, unrated = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        if (arr[i][0] != arr[i][1])
            rated = true;
    }
    if (rated)
        cout << "rated";
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i][0] > arr[i - 1][0])
            {
                unrated = true;
                break;
            }
        }
        if (unrated)
            cout << "unrated";
        else
            cout << "maybe";
    }
}