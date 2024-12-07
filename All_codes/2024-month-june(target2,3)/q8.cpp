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
    return 0;
}

void logic()
{
    long long int n, m, result = 0;
    cin >> n >> m;

    vector<int> v(n);
    for (auto &value : v)
    {
        cin >> value;
    }

    long long int i = 0;
    long long int j = n - 1;

    while (m > 0 && i <= j)
    {
        if (i == j)
        {
            if (m >= v[i])
            {
                result++;
            }
            break;
        }
        else
        {
            if (m > 0 && v[i] > 0)
            {
                m--;
                v[i]--;
                if (v[i] == 0)
                {
                    i++;
                    result++;
                }
            }

            if (m > 0 && v[j] > 0)
            {
                m--;
                v[j]--;
                if (v[j] == 0)
                {
                    j--;
                    result++;
                }
            }
        }
    }
    cout << result << endl;
}
