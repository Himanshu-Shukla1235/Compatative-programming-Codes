#include <bits/stdc++.h>

using namespace std;
bool compareFirstColumn(const std::vector<int> &row1, const std::vector<int> &row2)
{
    // Compare based on the values in the first column (column index 0)
    return row1[0] < row2[0];
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a = 0, b = 0, n, k;
        cin >> n;

        vector<vector<int>> v;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            cin >> b;
            v.push_back(vector<int>{a, b});
        }
        sort(v.begin(), v.end(), compareFirstColumn);

        // condition 1

        if (v[0][1] <= v[0][0])
        {
            k = v[0][1] ;
        }

        // condition 2

        if (v[0][1] > v[0][0])
        {
            //--------------------------------initialize
            if ((v[0][1] - v[0][0]) % 2 == 0)
            {
                k = ((v[0][1] - v[0][0]) / 2) + v[0][0];
            }

            else if ((v[0][1] - v[0][0]) % 2 != 0)
            {
                k = (((v[0][1] - v[0][0]) - 1) / 2) + v[0][0];
            }
            //---------------------------------.........
            // cout << "setinit" << k << "..";
            for (int i = 0; i < n; i++)
            {

                a = v[i][0];  
                b = v[i][1];  

            if (a <= k && b>=a && b<=k)
                {
                    // cout<<a<<"....";

                    // cout<<b<<"....";

                    if ((b - a) % 2 == 0)
                    {
                        k = ((b - a) / 2) + a;

                    }
                    else if ((b - a) % 2 != 0)
                    {
                        k = (((b - a) - 1) / 2) + a;
                    }

                    // cout<<"k="<<k<<".....";

                }
                if (a<=k && b<=a)
                {
                    k=b;
                }

                if (a > k)
                {

                    break;
                }
            }
        }

        cout << k << endl;
    }
    return 0;
}