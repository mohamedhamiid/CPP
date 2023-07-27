#include <iostream>
using namespace std;
int main()
{
    int n;
    int smallestLengthIndex = 0, biggestLengthIndex = 0;
    int seconds = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[biggestLengthIndex])
        {
            biggestLengthIndex = i;
        }
        else if (arr[i] <= arr[smallestLengthIndex])
        {
            smallestLengthIndex = i;
        }
    }
    if (biggestLengthIndex >= smallestLengthIndex)
        cout << (n - 2 - smallestLengthIndex) + biggestLengthIndex;
    else
        cout << (n - 1 - smallestLengthIndex) + biggestLengthIndex;
}
