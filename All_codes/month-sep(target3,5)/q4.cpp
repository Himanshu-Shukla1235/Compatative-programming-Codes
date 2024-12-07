#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n, cost = 0;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;

            a.push_back(x);
        }
        sort(a.begin(), a.end());

        for (int i = 0; i < n; ++i)
        {
            int b, l;
            b = n - 1 - i;

            l = a[b] - a[i];
            if (i >= b)
            {
                break;
            }
            cost = cost + l;
        }
        cout << cost << endl;
    }
    return 0;
}