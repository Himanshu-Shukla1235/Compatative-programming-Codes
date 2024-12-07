// B. Laura and Operations (900)
#include <bits/stdc++.h>
using namespace std;

void logic();
void check(int a, int b, int c);

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

    int a, b, c;

    cin >> a >> b >> c;

    check(a, b, c);
    check(b, a, c);
    check(c, b, a);

    cout << endl;
}

void check(int a, int b, int c)
{

    if (abs(b - c) % 2 == 0)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << 0 << " ";
    }
}
