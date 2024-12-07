// chemestry (900)

#include <bits/stdc++.h>

using namespace std;
void logic();

void check(vector<int> &v, int n, int k)
{
    int extra = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            i = i + 1;
            if (i == (n - 1))
            {
                extra--;
            }
        }

        else if (v[i] != v[i + 1])
        {
            extra++;
            // if (i==(n-1))
            // {
            //     extra++;
            // }
        }
    }

    extra++;
    // cout << '*' << extra << "*" << k;
    if ((k + 1) < extra)
    {

        cout << "no";
    }
    else
    {

        cout << "yes";
    }
}

void logic()
{
    int n, k;
    vector<int> v;
    cin >> n;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        int y = int(x);
        v.push_back(y);
    }

    sort(v.begin(), v.end());

    // for (int i = 0; i < n; ++i)
    // {
    //     cout << v[i] << " ";
    // }

    check(v, n, k);
    cout << endl;
}

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