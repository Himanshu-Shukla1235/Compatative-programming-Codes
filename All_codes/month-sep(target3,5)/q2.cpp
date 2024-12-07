
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n ;
        cin>>k;

        vector<int> v;

        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        vector<int> l;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (; j < n - 1; j++)
            {

                if ((v[j + 1] - v[j]) <= k)
                {
                    count++;
                }

                else if ((v[j + 1] - v[j]) > k)
                {
                    l.push_back(count);
                    break;
                }
               
                //                 v.erase(v.begin() + j);
            }
             if (j == (n - 1))
                {
                    break;
                }
        }

        sort(l.begin(), l.end());
        int ans = l.size();

        cout << ans << l[0] << v[2] << endl;
    }

    return 0;
}