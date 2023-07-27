#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int good = 0;
    int flag = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = 0;
        vector<int> v;
        int input;
        cin >> input;
        while (input > 0)
        {
            v.push_back(input % 10);
            input /= 10;
        }
        for (int i = 0; i <= k; i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == i)
                {
                    x++;
                    break;
                }
            }
        }
        if (x == k + 1)
        {

            good++;
        }
    }
    cout << good;
}