//----------------------------------------------- E. Romantic Glasses || 1300 --------------------------------------------
                                                        // **** //
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int M = 1e9 + 7;
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

    ll n;
    cin >> n;
    vector<ll> v(n, 0);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }

    map<ll, ll> mp;
    ll sum = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + v[i];
        }
        else
        {
            sum = sum - v[i];
        }
        mp[sum]++;
        if (mp[sum] >= 2)
        {
            cout << "yes" << endl;
            return;
        }
    }
    cout << "no" << endl;
    return;
}

//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: not much practice of famour problems    ....

//  Concept : here the concep is used is logical but famous -> is there is any sub-arrey in arrey whose sum is 0. ......

// suggestion : just remember famous questions  ............

// Somthing New : based on famous problem concept but still it is logical ;
