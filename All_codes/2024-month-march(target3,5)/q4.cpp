// C. Choose the Different Ones! | 1000
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

    return 0;
}

void logic()
{
    int n, m, k;
    cin >> n >> m >> k;
    set<int> s;
    set<int> sr;

    // Insert values into the set
    for (int i = 0; i < (n); i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // Insert values into the set
    for (int i = 0; i < (m); i++)
    {
        int x;
        cin >> x;
        sr.insert(x);
    }
    int scount = 0;
    int srcount = 0;
    for (int i = 1; i <= k; i++)
    {
        if (s.count(i) == 1 && sr.count(i) == 0)
        {
            if (scount == (k / 2))
            {
                cout << "no" << endl;
                return;
            }
            scount += 1;
        }
        if (s.count(i) == 0 && sr.count(i) == 1)
        {
            if (srcount == (k / 2))
            {
                cout << "no" << endl;
                return;
            }
            srcount += 1;
        }

        if (s.count(i) == 0 && sr.count(i) == 0)
        {
            cout << "no" << endl;
            return;
        }
    }

    cout << "yes" << endl;
}
