// A. Jellyfish and Undertale(900)

#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int a, b, n;
    vector<int> v;

    cin >> a;
    cin >> b;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());
    long long int sum = b;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < a)
        {
            sum = sum + v[i];
        }
        if (v[i] >= a)
        {
            sum = sum + a - 1;
        }
    }

    cout << sum << endl;
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