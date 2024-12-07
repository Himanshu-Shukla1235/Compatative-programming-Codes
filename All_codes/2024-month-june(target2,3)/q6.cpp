//--------------------------------------  C. Sofia and the Lost Operations || 1300  ---------------------------------------

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
    int n;
    cin >> n;
    vector<long long int> a(n);
    vector<long long int> b(n);

    for (auto &value : a)
    {
        cin >> value;
    }
    for (auto &value : b)
    {
        cin >> value;
    }

    int m;
    cin >> m;
    vector<long long int> d(m);
    for (auto &value : d)
    {
        cin >> value;
    }
    if (d[m - 1] != -1)
    {
        auto it = find(b.begin(), b.end(), d[m - 1]);
        if (it == b.end())
        {
            cout << "no " << endl;
            return;
        }
    }

    map<long long int, int> bMap;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            bMap[b[i]]++;
        }
    }

    map<long long int, int> dMap;
    for (const auto &value : d)
    {
        dMap[value]++;
    }

    for (const auto &pair : bMap)
    {
        if (dMap[pair.first] < pair.second)
        {
            cout << "no" << endl;
            return;
        }
    }

    cout << "yes" << endl;
}
