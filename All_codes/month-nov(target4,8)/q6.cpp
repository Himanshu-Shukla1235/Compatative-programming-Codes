// Three Threadlets(900)#

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

    vector<int> v;

    for (int i = 0; i < 3; i++)
    {
        int y;

        cin >> y;

        v.push_back(y);
    }
    sort(v.begin(), v.end());

    int i = 0;

    for (; i < 3; i++)
    {
        if (v[1] != v[0])
        {
            v[1] = v[1] - v[0];

            continue;
        }
        break;
    }

    for (; i < 3; i++)
    {
        if (v[2] != v[0])
        {
            v[2] = v[2] - v[0];

            continue;
        }
        break;
    }

    if (v[0] == v[1] && v[0] == v[2])
    {
        cout << "yes" << endl;
    }
    else
        cout << "no" << endl;
}