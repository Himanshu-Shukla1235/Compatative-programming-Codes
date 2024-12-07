#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    int p = 0;
    bool moved;

    while (p <= n && k >= 0)
    {
        if (p == 0 || s[p - 1] == 'L')
        {
            moved = false;

            for (int i = m; i >= 1; --i)
            {
                if (p + i - 1 < n)
                {
                    if (s[p + i - 1] == 'L')
                    {
                        p = p + i;
                        // cout << p << "L ";
                        moved = true;
                        break;
                    }
                }
            }
            if (!moved)
            {
                p = p + m;
                // cout<<"end"<<" ";
            }
        }

        if (p <= n)
        {
            if (s[p - 1] == 'W')
            {
                if (k <= 0)
                {
                    cout << "no" << endl;
                    return;
                }
                else
                {

                    p = p + 1;
                    k = k - 1;
                    // cout << p << "W ";
                }
            }
        }

        if (p <= n)
        {
            if (s[p - 1] == 'C')
            {
                cout << "no" << endl;

                return;
            }
        }
    }
    if (p > n)
    {
        cout << "yes" << endl;
    }
}

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


//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure:  code writing ability bad  ....

//  Concept :logical......

// suggestion : just practice  ............

// Somthing New : NO!