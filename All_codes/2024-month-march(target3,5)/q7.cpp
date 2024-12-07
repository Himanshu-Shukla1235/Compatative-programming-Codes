#include <bits/stdc++.h>
using namespace std;
void logic();
void swap();
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

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
        cout << arr[i];
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (2 * (i+1) > n)
        {
            break;
        }
        if (arr[i] = i)
        {
            arr[i] = i * 2;
            arr[i] = i;
        }
    }
    for (auto &value : arr)
    {
        cout << value;
    }
    cout << endl;
}
