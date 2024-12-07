#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n = 0, w = 0, e = 0, x = 0, y = 0, ans = 0;

        cin >> n;
        cin >> x;
        cin >> y;

        ans = x;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> w;
            cin >> e;
            if (w >= x && e >= y)
            {

                ans = -1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
