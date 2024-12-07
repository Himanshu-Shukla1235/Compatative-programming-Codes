#include <bits/stdc++.h>

using namespace std;
bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        // double c = 0.5;

        cin >> n;

        cin >> k;

        int a[n];
        int b[n];
        int g[n];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }

        

        for (int l = 0; l < n; l++)
        {
            int size = sizeof(b) / sizeof(b[0]);

            sort(b, b + size, compare);
            

            for (int m = l; m < n; m++)
            {
                if ((abs(a[l] - b[m]) <= k))
                {

                    g[l] = b[m];

                    b[m] = b[l];

                    b[l] = b[0];
                  

                    break;
                }
            }

            for (int j = 0; j < n; j++)
            {
                cout << g[j] << ' ';
            }
        }

        return 0;
    }
}