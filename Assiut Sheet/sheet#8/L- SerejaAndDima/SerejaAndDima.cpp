#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int n, sereja = 0, dima = 0;
    char turns = 0;
    cin >> n;
    vector<int> cards;
    for (int i = 0; i < n; i++)
    {
        int card;
        cin >> card;
        cards.push_back(card);
    }

    while (1)
    {
        int value = 0;
        if (cards.back() > cards.front())
        {
            value = cards.back();
            cards.pop_back();
        }
        else
        {
            value = cards.front();
            cards.erase(cards.begin());
        }

        if (turns % 2 == 0)
            sereja += value;
        else
            dima += value;

        turns++;

        if (!cards.size())
            break;
    }
    cout << sereja << " " << dima;
}