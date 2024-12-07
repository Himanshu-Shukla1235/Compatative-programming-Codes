
//-------------------------------------------- Arrow Path || 1300 ---------------------------------

#include <bits/stdc++.h>
using namespace std;
void logic();
bool check(vector<pair<char, char>> &v, int p1, int p2, int n);

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

    vector<pair<char, char>> v(n);

    for (int i = 0; i < n; i++)
    {
        char first;

        cin >> first;
        v[i].first = first;
    }

    for (int i = 0; i < n; i++)
    {
        char second;

        cin >> second;
        v[i].second = second;
    }

    bool c = check(v, 0, 1, n);
    if (c == false)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}

bool check(vector<pair<char, char>> &v, int p1, int p2, int n)
{

    int a = p1;
    int b = p2;
    if (p1 == 1 && p2 == n)
    {
        // cout<<p2<<p1;
        return true;
    }
    else if (p1 == 0 && p2 == n)
    {
        // cout<<p2<<p1;
        return false;
    }

    if (p1 == 0)
    {
        if (v[p2].first == '>')
        {
            p2 = b + 2;
        }

        else if (v[p2 - 1].second == '>')
        {
            p1 = 1;
            p2 = b + 1;
        }
    }
    else if (p1 == 1)
    {
        if (v[p2].second == '>')
        {
            p2 = b + 2;
        }

        else if (v[p2 - 1].first == '>')
        {
            p1 = 0;
            p2 = b + 1;
        }
    }

    if (p2 == b)

    {
        // cout<<p2<<p1;
        return false;
    }
    else
    {
        return check(v, p1, p2, n);
    }
}
