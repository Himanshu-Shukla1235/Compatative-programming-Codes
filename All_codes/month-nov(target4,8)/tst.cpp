#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main()
{
    int k=3|2, i = 1;

    for (; ; i++)
    {
        k = i | 0;
        if (k == 7)
        {
            break;
        }
    }

    cout << k << " " << i;

    return 0;
}
