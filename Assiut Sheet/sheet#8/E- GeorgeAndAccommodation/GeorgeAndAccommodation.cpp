#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int living = 0, avail = 0;
    int noOfRooms = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> living >> avail;
        if ((avail - living) >= 2)
            noOfRooms++;
    }
    cout << noOfRooms;
}