
// ------------------------------------------ D. Seraphim the Owl || 1300  -----------------------------------------------------
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
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(n);

    for (auto &value : a)
    {
        cin >> value;
    }
    for (auto &value : b)
    {
        cin >> value;
    }

    long long int result = 0;
    for (int i = m; i < n; i++)
    {
        result += min(a[i], b[i]);
    }

    long long int sum = 0;
    long long int mini = a[m - 1];

    for (int i = m - 2; i >= 0; i--)
    {
        sum += b[i + 1];

        if (sum >= mini)
        {
            break;
        }

        if (sum + a[i] < mini)
        {
            mini = sum + a[i];
        }
    }

    cout << result + mini << endl;
}
