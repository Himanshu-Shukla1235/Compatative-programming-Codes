#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define maxi INT_MAX
#define mini INT_MIN

// Function declarations
void logic();
ll factorial(ll n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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
    ll n, m, result = 0;
    cin >> n >> m;

    map<ll, ll> mp;
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    vector<pair<ll, ll>> v(mp.begin(), mp.end());

    // Iterate from the end of the vector to compare adjacent elements
    for (int i = v.size() - 1; i >= 0; i--)
    {
        ll sum = 0;

        // Check if current and previous values differ by at most 1
        if (i > 0 && v[i].first - v[i - 1].first <= 1)
        {
            ll current_value = v[i].first;
            ll previous_value = v[i - 1].first;
            ll current_count = v[i].second;
            ll previous_count = v[i - 1].second;

            // Calculate maximum possible sum with both current and previous values
            for (ll j = 0; j <= current_count; j++)
            {
                ll remaining_capacity = m - current_value * j;
                if (remaining_capacity >= 0)
                {
                    ll k = min(previous_count, remaining_capacity / previous_value);
                    ll summ = current_value * j + previous_value * k;
                    sum = max(summ, sum);
                }
            }
        }
        else
        {
            // Accumulate sum with current value only
            ll countmax = m / v[i].first;
            sum = min(v[i].first*countmax, v[i].first * v[i].second);
        }

        result = max(result, sum);
    }

    cout << result << endl;
}
