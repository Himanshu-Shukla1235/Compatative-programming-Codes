

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n, k;

        cin >> n;
        cin >> k;

        int p[n];
        int l[n];

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++)
        {

            int j = i + 1;
            for (; j < n; j++)
            {
                if (abs(p[i] - p[j]) == k && (p[i] > p[j]))
                {
                    p[i] = p[j];
                    
                }

                if ((p[i]) == (i + 1))
                {

                    break;
                }

                else if ((p[i]) != (i + 1))
                {
                    j=i+1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
    }
}