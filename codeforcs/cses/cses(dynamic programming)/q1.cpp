// ------------------------------------------Dice Combinations----------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int getways();

int main()
{

    int x = getways();
    cout<<x;
}

int getways()
{
    int n;
    long long int mod =1000000000+7;
    cin >> n;
    vector<int> dp(n + 1);

    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
      
        
        for (int j = 1; j <= 6; j++)
        {
            
     if (i-j>=0)
     {
            dp[i]=(dp[i]+dp[i-j]) % mod;
     }

      
        }
    }
    return dp[n];
}