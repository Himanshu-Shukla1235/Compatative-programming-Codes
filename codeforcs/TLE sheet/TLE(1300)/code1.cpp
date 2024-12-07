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

    long long int n, x, y, result = 0;
    cin >> n >> x >> y;

    vector<long long int> v(n);

    for (auto &value : v)
    {
        cin >> value;
    }
    map<long long int, map<long long int, long long int>> mp;
    for (int i = 0; i < n; i++)
    {
        result += mp[(x - (v[i] % x)) % x][v[i] % y];
        mp[v[i] % x][v[i] % y]++;
    }

    cout << result << endl;
}


//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: no faliure || takes time  ....

//  Concept : In this question we use the greedy  and two pointer concept......

// suggestion : just practice  ............

// Somthing New : NO!