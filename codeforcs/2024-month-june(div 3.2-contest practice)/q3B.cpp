#include <bits/stdc++.h>
using namespace std;
void logic();
long long int getscore(vector<long long int> &a1, vector<long long int> &a2, long long int k, long long int n, long long int p);
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
    long long int n, k, pb, ps,b,s;

    cin >> n >> k >> pb >> ps;

    vector<long long int> a1(n);
    vector<long long int> a2(n);

    for (auto &v : a1)
    {

        cin >> v;
    }

    for (auto &v : a2)
    {

        cin >> v;
    }
b=getscore(a1,a2,k,n,pb);

// cout<<"-----------------------"<<endl;

s=getscore(a1,a2,k,n,ps);

// cout<<b<<" "<<s<<" " ;

  if (b > s)
    {
        cout << "Bodya" << endl;
    }
    else if (b < s)
    {
        cout << "Sasha" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }

}

long long int getscore(vector<long long int> &a1, vector<long long int> &a2, long long int k, long long int n, long long int p)
{
    long long int final = 0,pp=p,round=0;
    long long int final2 = -1;
    long long int result = 0;
    for (long long int i = 0; i < n; i++)
    { 
     
       
            result = result + a2[p - 1];
            // cout<< result<<" ";
            
            round++;
            
          
        


        final = result + a2[p - 1] * (k-round);
          // cout<<a2[p - 1] * (k-round) <<" ";
          //      cout<<" | "<<final<<endl;
               p = a1[p - 1];
         
        if (final > final2)
        {
            final2 = final;
        }
        if (( round==k))
        {
            break;        }
    }
    return final2;
}