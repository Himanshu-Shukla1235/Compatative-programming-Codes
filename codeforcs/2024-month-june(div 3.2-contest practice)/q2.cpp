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

    vector<int> arr(n - 1);

    vector<int> result;

    for (auto &v : arr)
    {

        cin >> v;
    }

    int vl = 1000;
    result.push_back(vl);
    for (int i = 0; i < n - 1; i++)
    {
        vl = vl + arr[i];
        result.push_back(vl);
    }

    for (auto &v : result)
    {

        cout << v << " ";
    }

    cout << endl;
}