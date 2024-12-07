#include <iostream>

using namespace std;
int main()
{

    int t, n;
    int a[n];
    int b[n - 1];

    cin >> t;

    for (int i; i < t; i++)
    {
        cin >> n;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        a[0] = b[0];
        a[1] = rand() % b[0];

        for (int j = 1; j < n; j = j++)
        {

            if (b[j] <= a[j])
            {
                a[j + 1] <= (rand() % b[j] + 1);
            }
            if (b[j] > a[j])
            {
                a[j + 1] = b[j];
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << a[k];
        }
    }
}