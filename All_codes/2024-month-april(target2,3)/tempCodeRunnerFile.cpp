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

    int a, b, d, sum1, sum2;

    cin >> a;
    cin >> b;
    cin >> d;

    if (d >= a)
    {
        sum1 = (d - (d % a)) / a;
    }
    if (d >= b)
    {
        sum2 = (d - (d % b)) / b;
    }
    cout << sum1 << sum2;
    cout << sum1 + sum2 + 2 << endl;
}