#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void logic();

// mini subarrey to have maximum sum using binary search

#include <bits/stdc++.h>
using namespace std;

ll search(vector<ll> &pref, ll l, ll r, ll x)
{
    ll mid, lead = r;
   
    while (l <= r)
    {
        mid = (l + r) / 2;

        if (pref[lead] - pref[mid - 1] > x)
        {
            l = mid + 1; // Move right if condition is met
        }

        else if (pref[lead] - pref[mid - 1] <= x)
        {
            r = mid - 1; // Move left if condition is not met
        }
    }
    if (lead-l<0)
    {
     return 0;
    }

// cout<<lead<<l;
    
    return lead - l;
}

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
    ll n, x;
    cin >> n >> x;

    vector<ll> v(n);
    vector<ll> pref(n + 1);

    for (auto &val : v)
    {
        cin >> val;
    }

    ll prsum = 0;
    ll subt = 0;

    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prsum = prsum + v[i];
        pref[i] = prsum;

        // cout << prsum << " ";
    }

    ll sum = 0, l = 0, r, result = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];
        if (v[i] > x)
        {
            sum = 0;
            continue;
        }

        if (sum > x)
        {
            sum = 0;
            r = i;
            subt = subt + search(pref, l + 1, r + 1, x);
            l = r;
            result=result+subt-1;
    
        }

        result = result + i + 1 - subt;
        // cout << result << " ";
    }

    cout << result << endl;
}
