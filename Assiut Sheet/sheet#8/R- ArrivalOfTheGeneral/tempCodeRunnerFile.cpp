#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int n;
    int smallestLength = 100, biggestLength = 0, prevLength = 0;
    int smallestLengthIndex = 0, biggestLengthIndex = 0;
    int seconds = 0;
    cin >> n;
    int arr[n];
    int length = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < smallestLength || !i)
        {
            smallestLengthIndex = i;
            smallestLength = arr[i];
        }

        else if (arr[i] > biggestLength)
        {
            biggestLength = arr[i];
            biggestLengthIndex = i;
        }
    }
    cout << (n - smallestLengthIndex - 1) + biggestLengthIndex;
}