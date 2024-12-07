//------------------------------------------------ D. Find the Different Ones! || 1300 -------------------------------

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
}

void logic()
{

    int n, q;

    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);

    for (auto &value : v)
    {
        cin >> value;
    }

    cin >> q;
    vector<pair<int, int>> p;
    for (int i = 0; i < q; ++i)
    {

        int a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }

    int x = -1, y = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            v2[i] = n + 1;
        }
        else
        {
            if (v[i] != v[i + 1])
            {
                v2[i] = i + 2;
            }
            else
            {
                v2[i] = v2[i + 1];
            }
        }
    }

    
    for (int i = 0; i < q; i++)
    {
        x = -1;
        y = -1;
        if (v2[p[i].first - 1] <= p[i].second)
        {
            x = p[i].first;
            y = v2[p[i].first - 1];
        }
        cout << x << " " << y << endl;
    }
    cout << endl;
}

/*

//*____________________________________________________________________________________________________________________________

//*------ Insights--------

faliure:  ....

Concept : this question can be solved y two ways 1-sort decmposition
                                                 2-simple approach

suggestion : just practice  ............

Somthing New : NO!


*/
