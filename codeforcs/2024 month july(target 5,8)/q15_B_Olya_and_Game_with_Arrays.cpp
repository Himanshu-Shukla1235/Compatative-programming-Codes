#include <bits/stdc++.h>

#define ll long long int
using namespace std;
void logic();

void inhibit(vector<pair<ll, ll>> &v, int n)
{
    ll maxi = LLONG_MIN;

    vector<ll> v1(n);

    for (auto &val : v1)
    {

        cin >> val;
    }
    sort(v1.begin(), v1.end());

    v.push_back(make_pair(v1[0], v1[1]));
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

    ll n, result = 0;

    cin >> n;
    vector<pair<ll, ll>> v;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        inhibit(v, m);
    }

    sort(v.begin(), v.end());
    result = result + v[0].first;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    ll mini = LLONG_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        mini = min(mini, v[i].second);
        result = result + v[i].second;
    }

    cout << result - mini << endl;
}