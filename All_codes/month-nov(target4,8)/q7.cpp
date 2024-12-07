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
    vector<char> v;

    for (int i = 0; i < n; i++)
    {
        char y;

        cin >> y;

        v.push_back(y);
    }
    int dotscount = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        while (v[i] != '#')
        {
            dotscount++;
            count++;
        }

        if (count >= 3)
        {

            dotscount = 2;
            break;
        }
        count=0;
    }

    cout << dotscount << endl;
}