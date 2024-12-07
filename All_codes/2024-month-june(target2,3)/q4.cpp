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
    long long int result;
    cin >> n;
    vector<int> v(n);

    for (auto &a : v)
    {
        cin >> a;
    }
    result = max(v[0], v[1]);
    for (int i = 0; i < n-1; i++)
    {
        long long int b = max(v[i], v[i + 1]);
        if (b < result)
        {
            result = b;
        }
    }
    cout << result - 1 << endl;
}