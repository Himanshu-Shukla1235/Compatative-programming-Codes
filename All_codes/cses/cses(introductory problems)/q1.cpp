#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    set<int> a;

    for (int i = 0; i < n - 1; i++)
    {
        int v;
        cin >> v;
        a.insert(v);
    }


    for (int i = 1; i <= n; i++)
    {

        if (a.find(i) == a.end())
        {
            cout << i;
            return 0;
        }
    }
  
}