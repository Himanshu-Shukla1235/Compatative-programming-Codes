#include <bits/stdc++.h>
using namespace std;

void logic();
void check(int k);

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
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool isSorted = true;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
    {
        cout << "YES" << endl;
    }
    else
    {
        check(k);
    }
}

void check(int k)
{
    if (k < 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
