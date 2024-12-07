#include <bits/stdc++.h>

using namespace std;
int c = 0;

void cse()
{

    int a, b, x, y, n, m, k;
    cin >> m >> n >> k;
    cin >> a >> b;

    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;

        if (((abs(a - x)) % 2) == 0 && ((abs(b - y)) % 2) == 0)
        {

            c = 1;
        }

        else if (((abs(a - x)) % 2) != 0 && ((abs(b - y)) % 2) != 0)
        {

            c = 1;
        }
    }
}

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        cse();
        if (c == 1)
        {
            cout << "no" << endl;
        }

        else if (c == 0)
        {
            cout << "yes" << endl;
        }
        c = 0;
    }

    return 0;
}