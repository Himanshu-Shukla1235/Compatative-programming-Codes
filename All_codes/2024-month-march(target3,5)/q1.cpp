// make equal | 800

#include <bits/stdc++.h>
void logic();
using namespace std;
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

void logic()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (auto &value : arr)
    {

        cin >> value;
    }
    int sum = accumulate(arr.begin(), arr.end(), 0);
    auto minimu = min_element(arr.begin(), arr.end());
    int have = 0;

    // if (sum % n != 0)
    // {
    //     cout << "NO";
    //     return;
    // }
    for (int i = 0; i < n; i++)
    {

        for (auto &value : arr)
        {

            if (value > *minimu)
            {

                have = have + value - *minimu;
            }
            else if (value < *minimu)
            {
                if (have != 0)
                {

                    have = have - (*minimu - value);
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        if (have != 0)
        {
            have = 0;
            *minimu++;
        }
        else if (have == 0)
        {

            cout << "YES" << endl;
            break;
        }
    }
}