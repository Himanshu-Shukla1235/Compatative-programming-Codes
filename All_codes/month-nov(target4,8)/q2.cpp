// ------------------------Points and minimum distance-------------------------------------

#include <bits/stdc++.h>

using namespace std;

// bool sortBySecond(const pair<int, int> &a, const pair<int, int> &b)
// {
//     return a.second < b.second;
// }
int midistance(vector<int> &v1, int n)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum1 = abs(v1[i] - v1[i + 1]) + sum1;
        // cout << sum1 << "+";
    }
    for (int j = n; j < ((2 * n) - 1); j++)
    {
        sum2 = abs(v1[j] - v1[j + 1]) + sum2;
        // cout << sum2 << "+";
    }
    int result = sum1 + sum2;
    return result;
}

void logic()
{
    vector<int> v1;

    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        int x = 0;

        cin >> x;

        v1.push_back(x);
    }

    sort(v1.begin(), v1.end());
    cout << midistance(v1, n) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " " << v1[n + i] << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        logic();
    }
    return 0;
}