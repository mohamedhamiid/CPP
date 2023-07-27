#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    long long x;
    int distress = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        string plusOrMinus;
        long long quantity;
        cin >> plusOrMinus >> quantity;
        if (plusOrMinus == "+")
            x += quantity;
        else if (plusOrMinus == "-" && quantity <= x)
            x -= quantity;
        else
            distress++;
    }
    cout << x << " " << distress;
}