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
    int n, maxi = 0;
    map<int, int> mp;

    cin >> n; // Add input for 'n'

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        maxi = max(x, maxi);
        mp[x]++;
    }

    // Example of using auto to iterate over the map
    for (auto &pair : mp)
    {
        int key = pair.first;
        int value = pair.second;
        if (value % 2 != 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
