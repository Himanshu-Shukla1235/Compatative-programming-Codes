//--------------------------------------------------- Minimizing Coins --------------------------------------------------

// _____________ #  iterative method_______________________

#include <bits/stdc++.h>
using namespace std;
int logic(vector<int> &v, int x, int n);
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for (auto &value : v)
    {

        cin >> value;
    }
    logic(v, x, n);
}
int logic(vector<int> &v, int x, int n)
{

    vector<int> dp(x + 1, 1e9);

    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        int mini = 1e9;

        for (int j = 0; j < n; j++)
        {
            if (i >= v[j] && dp[i - v[j]] != 1e9)
            {
                if (dp[i - v[j]] < mini)
                {
                    mini = dp[i - v[j]];
                }
            }
        }
        dp[i] = 1 + mini;
    }
    if (dp[x] >= 1e9)
    {
        cout << -1;
    }
    else
    {
        cout << dp[x];
    }

    return 0;
}