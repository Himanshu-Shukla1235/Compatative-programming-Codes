#include <bits/stdc++.h>

using namespace std;

int check1(vector<int> &a, int n)
{
    int o = 0;

    for (int i = 0; i < n; ++i)
    {
        if ((a[i] % 2) != 0)
        {
            o = a[i];
            break;
        }
    }

    return o;
}
int check2(vector<int> &a, int n)
{
    int e = 0;

    for (int i = 0; i < n; ++i)
    {
        if ((a[i] % 2) == 0)
        {
            e = a[i];
            break;
        }
    }

    return e;
}

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        sort(a.begin(), a.end());
        int minodd = check1(a, n);
        int minieven = check2(a, n);

        if (minieven < minodd && minieven != 0 && minodd != 0)
        {
            cout << "no" << endl;
        }
        if (minieven > minodd && minodd != 0 && minieven != 0)
        {
            cout << "yes" << endl;
        }

        if (minieven == 0 || minodd == 0)
        {
            cout << "yes" << endl;
        }
    }
}