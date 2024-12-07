#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n, result;
    cin >> n;

    if (n == 0)
    {

        cout << 0 << endl;
        return;
    }

    int count = 0, y = n;
    while (n != 0)
    {
        n = n / 10;

        count++;
    }
    int y1 = y - pow(10, count - 1);
    y = y / pow(10, count - 1);
    result = (count - 1) * (y) + (y1);

    cout << result << endl;
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
