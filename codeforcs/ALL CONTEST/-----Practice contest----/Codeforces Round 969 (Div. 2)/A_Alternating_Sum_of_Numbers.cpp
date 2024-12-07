#include <bits/stdc++.h>

using namespace std;

void logic();
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

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }

    int result = 0;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (check == true)
        {
            result = result + v[i];
            check = false;
        }
        else
        {
            result = result - v[i];
            check = true;
        }
    }

    cout << result << endl;
}

