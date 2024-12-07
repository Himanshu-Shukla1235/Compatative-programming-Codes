#include <bits/stdc++.h>
void logic();
using namespace std;
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
    int n, count = 0;
    cin >> n;
    // cout<<n;

    vector<char> arr(n);
    for (auto &value : arr)
    {
        cin >> value;
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] == 'm' && arr[i + 1] == 'a' && arr[i + 2] == 'p')
        {
            count++;
            i=i+2;
        }
        else if (arr[i] == 'p' && arr[i + 1] == 'i' && arr[i + 2] == 'e')
        {
            count++;
            i=i+2;
        }
    }
    cout << count << endl;
}