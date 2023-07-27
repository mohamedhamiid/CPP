#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int sum = 0;
    vector<int> points;
    for (int i = 0; i < 3; i++)
    {
        int value;
        cin >> value;
        points.push_back(value);
    }
    sort(points.begin(), points.end());

    for (int i = 1; i < 3; i++)
    {
        sum += (points[i] - points[i - 1]);
    }
    cout << sum;
}