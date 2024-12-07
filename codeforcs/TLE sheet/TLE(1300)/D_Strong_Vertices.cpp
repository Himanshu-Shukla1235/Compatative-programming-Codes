//------------------------------------------------ D. Strong Vertices || 1300 ----------------------------
#include <bits/stdc++.h>
using namespace std;

//................................macros------------------------>
#define ll long long int
#define maxi INT_MAX
#define mini INT_MIN

//.......................... function declarations ................................>
void logic();
ll factorial(ll n);

//..................................................................................>

int main()
{
    ios::sync_with_stdio(false); // Disable synchronization
    cin.tie(nullptr);            // Untie cin from cout

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
    ll n, result = 1;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> resulv;

    for (auto &val : a)
    {
        cin >> val;
    }
    for (auto &val : b)
    {
        cin >> val;
    }
    vector<pair<ll, ll>> p;

    for (int i = 0; i < n; i++)
    {
        p.push_back(make_pair(a[i] - b[i], i));
    }

    sort(p.begin(), p.end());

    // for (auto &pair : p)
    // {

    //     cout << pair.first << "->" << pair.second << " ";
    // }
    // cout << "\n"
    //      << "\n";
    for (int i = n - 1; i > 0; i--)
    {
        if (p[i].first == p[i - 1].first)
        {
            result++;
        }
        else
        {
            break;
        }
    }
    cout << result << "\n";
    resulv.push_back(p[n - 1].second);
    for (int i = n - 1; i > 0; i--)
    {
        if (p[i].first == p[i - 1].first)
        {
            resulv.push_back(p[i - 1].second);
        }
        else
        {

            break;
        }
    }
    sort(resulv.begin(), resulv.end());

    for (int i = 0; i < resulv.size(); i++)
    {
        cout << resulv[i] + 1 << " ";
    }
    cout << "\n";
}

//............................... function codes ..........................................

// 1._____________factorial function_____________________

ll factorial(ll n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

//..........................................................................................

//------ Insights--------

// failure: no failure!  ....

// Concept : mathematics concept a1-a2 >= b1-b2 => a1-b1 >= a2-b2 ......

// suggestion : try to use some mathematics mind  ............

// Something New : NO!