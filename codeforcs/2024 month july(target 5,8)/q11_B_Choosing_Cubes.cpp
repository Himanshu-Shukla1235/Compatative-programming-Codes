//

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
    int n, f, k;

    cin >> n >> f >> k;
    vector<int> vec(n);
    for (auto &value : vec)
    {
        cin >> value;
    }

    // Sort in descending order
    sort(vec.begin(), vec.end(), greater<int>());
    if (vec[k] == vec[k + 1] && vec[k] > f)
    {
        cout << "MAYBE" << endl;
        return;
    }
    else if (vec[k] > f && vec[n-1]<=f)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        return;
    }
}
