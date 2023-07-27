#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int classTeam[5000][3] = {};
    int goodProg = 0, goodMath = 0, goodPE = 0, teams = 0;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (input == 1)
            classTeam[goodProg++][0] = i + 1;
        if (input == 2)
            classTeam[goodMath++][1] = i + 1;
        if (input == 3)
            classTeam[goodPE++][2] = i + 1;
    }

    for (int i = 0; i < goodProg; i++)
    {
        if (!classTeam[i][0] || !classTeam[i][1] || !classTeam[i][2])
            break;
        teams++;
    }

    cout << teams << endl;
    for (int i = 0; i < teams; i++)
        cout << classTeam[i][0] << " " << classTeam[i][1] << " " << classTeam[i][2] << " " << endl;
}