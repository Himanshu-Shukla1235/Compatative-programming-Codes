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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a1(n);
    vector<int> a2(m);

    for (auto &value : a1)
    {
        cin >> value;
    }
    for (auto &value : a2)
    {
        cin >> value;
    }

    int count = 0;

    for (auto i = 0; i < n; ++i)
    {
        for (auto j = 0; j < m; ++j)
        {
            if (a1[i] + a2[j] <= k)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}