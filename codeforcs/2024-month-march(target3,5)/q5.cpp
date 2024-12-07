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
    vector<int> arr(n);

    for (auto &value : arr)
    {
        cin >> value;
    }

    sort(arr.begin(), arr.end());

    cout << arr[n - 1] - arr[0] << endl;
}