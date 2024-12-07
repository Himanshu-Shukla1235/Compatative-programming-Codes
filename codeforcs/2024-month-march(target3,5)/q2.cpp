
// Recovering a Small String | 800

#include <bits/stdc++.h>
void logic();
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        logic();
    }

    return 0;
}

void logic()
{
    int n;

    cin >> n;

    int x, y, z;
    for (int i = 1; i <= 26; i++)
    {
        x = i;
        for (int j = 1; j <= 26; ++j)
        {
            y = j;
            z = n - (i + j);

            if (z <= 26)
            {
                cout << static_cast<char>(x + 96) << static_cast<char>(96 + y) << static_cast<char>(z + 96) << endl;

                return;
            }
        }
    }
}