#include <bits/stdc++.h>
using namespace std;
#define ll long long int
long long int M = 1e9 + 7;

void solve()
{
    ll n, d, l;
    cin >> n >> d >> l;
    if (n < d || l < 2)
    { cout << -1 << "\n";
        return ;
    }

    vector<pair<ll, ll>> ans;
    // coverint the diameter

    d++;
    for (ll i = 2; i <= d; ++i)
    {
        ans.push_back({i - 1, i});
    }

    ll stlen = d / 2;
    ll stnode = d + 1;
    ll imp_point = d / 2 + 1;
    d--;

    // covering all the leafs
    vector<pair<ll, ll>> left_cover;
    for (ll i = 3; i <= l; ++i)
    {
        ans.push_back({imp_point, stnode});
        left_cover.push_back({stnode, d - stlen - 1});
        stnode++;
    }

    // now left nodes
    ll left_nodes = n - d + 1 - l;

    for (auto it : left_cover)
    {
        ll st = it.first;
        for (ll i = 0; i < it.second; ++i)
        {
            if (stnode > n || left_nodes <= 0)
                break;
            ans.push_back({st, stnode});
            st = stnode++;
            left_nodes--;
        }
    }

    if (n == stnode - 1)
    {
        for (auto it : ans)
        {
            cout << it.first << " " << it.second << "\n";
        }
        return;
    }

    cout << -1 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    {
    }

    while (t--)
    {
        solve();
    }
    return 0;
}