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
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> mp;
    bool ch = true;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0' && ch == true)
        {
            mp['0']++;
            ch = false;
        }
        else if (s[i] == '1')
        {
            mp['1']++;
            ch = true;
        }
    }

    if (mp['0'] >= mp['1'])
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}
