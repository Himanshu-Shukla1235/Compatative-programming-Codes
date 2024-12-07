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
    int a, b, c;
    vector<int> v(3);

    for (auto &vl : v)
    {

        cin >> vl;
    }

    sort(v.begin(), v.end());
    //  for (auto &vl : v)
    // {

    //     cout<< vl<<" ";
    // }


    int result = abs(v[1] - v[0] + v[2] - v[1]);

    cout << result << endl;
}