#include <bits/stdc++.h>
using namespace std;
void logic();
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        logic();
    }
}

void logic()
{

    int x, y;

    cin >> x;
    cin >> y;

    int numsc = y / 2 + y % 2, leftboxes = 0;

    leftboxes = numsc * 15 - 4 * y;
    // cout<<numsc<<" "<<leftboxes<<" ";

    for (int i = 0;; i++)
    {
        if (leftboxes >= x)
        {
            break;
        }
        numsc = numsc + 1;

        leftboxes = leftboxes + 15;
    }

    cout << numsc << endl;
}