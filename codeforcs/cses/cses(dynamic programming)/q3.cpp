//---------------------------------------------------  Coins combinations 1 --------------------------------------------------

// _____________ #  iterative method_______________________

#include <bits/stdc++.h>
using namespace std;
int logic(vector<int> &v, int x, int n);
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for (auto &value : v)
    {

        cin >> value;
    }
    logic(v, x, n);
}
int logic(vector<int> &v, int x, int n)
{

    vector<long long int> dp(x + 1, 0);

    dp[0] = 1;
    for (int i = 1; i <= x; i++)
    {
       

        for (int j = 0; j < n; j++)
        {
            if (i >= v[j] )
            {

                
                
                    dp[i] = (dp[i - v[j]] + dp[i]) %  1000000007;
                
                
            }
        }
       
    }
    
   
    
        cout << dp[x] ;
    

    return 0;
}