// chips on the board (900)
#include <bits/stdc++.h>

using namespace std;

long long int sum(vector<long long int> &v1, vector<long long int> &v2, int n)
{
    long long int sum = 0;
    sort(v2.begin(), v2.end());
    for (int i = 0; i < n; i++)
    {
        sum = abs(v1[i]) + abs(v2[0]) + sum;
    }

    return sum;
}

void logic()
{

    int n;
    cin >> n;
    vector<long long int> v1;
    vector<long long int> v2;
    for (int i = 0; i < n; i++)
    {
        long long int x = 0;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        long long int x = 0;
        cin >> x;
        v2.push_back(x);
    }
    long long int mini = min(sum(v1, v2, n), sum(v2, v1, n));
    cout << mini << endl;
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {

        // logic

        logic();
    }
    return 0;
}