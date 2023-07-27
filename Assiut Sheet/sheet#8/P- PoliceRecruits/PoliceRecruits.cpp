#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int n, crime = 0, detector = 0, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        if (input > 0)
            detector += input;
        else
        {
            if ((detector + input) >= 0)
                detector--;
            else
                res++;
        }
    }
    cout << res;
}