// ---------------------------------------------  C. Closest Cities || 1300 -----------------------------------


#include <bits/stdc++.h>
#define ll long long int
const int M = 1e9 + 7;

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
    int n;

    cin >> n;
    vector<ll> v(n);
    for (auto &value : v)
    {
        cin >> value;
    }
    
    int m;
    cin >> m;

    vector<pair<int, int>> v2(m);

    for (auto &value : v2)
    {
        int a, b;
        cin >> a >> b;
      value=  make_pair(a - 1, b - 1);
    }vector<ll> forward(n);
    vector<ll> backward(n);

    forward[0] = 0;
    forward[1] = 1;
    for (int i = 2; i < n; i++)
    {
        if (v[i - 1] - v[i - 2] > v[i + 1 - 1] - v[i - 1])
        {

            forward[i] = 1 + forward[i - 1];
        }
        else
        {
            forward[i] = v[i] - v[i - 1] + forward[i - 1];
        }
    }
    backward[n - 1] = 0;
    backward[n - 2] = 1;
    for (int i = n -3 ; i >= 0; --i)
    {
        if (v[i + 1] - v[i - 1 + 1] < v[i + 1 + 1] - v[i + 1])
        {

            backward[i] = 1 + backward[i + 1];
        }
        else
        {
            backward[i] = v[i + 1] - v[i] + backward[i + 1];
        }
    }
    
    ll result;
    for (auto &value : v2)
    {
        if (value.first >= value.second)
        {
            result = backward[value.second] - backward[value.first];
        }
        else
        {
            result = forward[value.second] - forward[value.first];
        }
        cout << result << endl;
    }

    cout << endl;
}

//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: no faliure || takes time  ....

//  Concept : logial problem ......

// suggestion : just practice  ............

// Somthing New : NO!