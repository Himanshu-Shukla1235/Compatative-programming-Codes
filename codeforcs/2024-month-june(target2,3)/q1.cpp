// A. Problem Generator ||  800

#include <bits/stdc++.h>q
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
    int n, m,result=0;
    cin >> n >> m;

    string s;

    cin >> s;

    for (char c = 'A'; c !='H'; c++)
    {
        int cont=count(s.begin(),s.end(),c);
          
          if (cont<m)
          {
      result=result+(m-cont);
          }

      }

      cout<<result<<endl;
}