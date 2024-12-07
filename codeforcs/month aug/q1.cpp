#include "bits/stdc++.h"


using namespace std;
int fun(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
            exit(0);
        }
    }

    return 1;
};

// int opr(int(arr)[], int n)
// {
//     int o = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int o1;
//         o1 = arr[i + 1] - arr[i];
//         if (o1 > o)
//         {
//             o = o1;
//         }
//     }

//     return o;
// }
int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n, o = 0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (fun(a, n) == 0)
        {
            cout << o << endl;
        }
        else if (fun(a, n) == 1)
        {

            // for (int i = 0; i <= a[n]; i++)
            // {
            //     // opr(a, n);
            //     // o++;

            //     // if ((a[n - 1]) < (a[n - 2]))
            //     // {

            //     //     break;
            //     // }

            // }
            o = abs(a[1] - a[0]);
            for (int i = 1; i < n - 1; i++)
            {
                int o1 = abs(a[i + 1] - a[i]);

                if (o1 < o)
                {
                    o = o1;
                }
            }

            cout << (o / 2) + 1 << endl;
        }
    }
    return 0;
}
// 53943947 298407670 734902000
