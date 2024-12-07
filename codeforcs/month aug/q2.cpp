#include "bits/stdc++.h"

#include <algorithm>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int k,  r = 0;
        int  n;

        cin >> n;
        cin >> k;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int count = 0;
        int j = 0;
        float l=n/2;

        for (int i = j; i < n-1; i++)
        {

            if (a[i + 1] - a[i] <= k)
            {
                count++;
                continue;
            }
            else if (a[i + 1] - a[i] > k)
            {
                j = i + 1;

                if (count >= l)
                {
                    cout << (n - count) << endl;
                    break;
                }
                count = 0;
                continue;
            }
        }
    }
    return 0;
}