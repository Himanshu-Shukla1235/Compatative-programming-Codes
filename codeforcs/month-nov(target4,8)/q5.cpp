// The line trip (800)

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

    int n, x;
    cin >> n >> x;

    vector<int> v;
    v.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;

        v.push_back(y);
    }

    int maxdiff = 0;

    for (int i = 0; i < n; i++)
    {

        if ((v[i + 1] - v[i]) > maxdiff)
        {
            maxdiff = v[i + 1] - v[i];
        }
    }

    int result = max(2 * (x - v[n]), maxdiff);

    cout << result << endl;
}