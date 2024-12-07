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
int n;
    string s;
    cin>>n;
    cin >> s;

    set<char> unique;

    for (char c : s)
    {

        unique.insert(c);
    }

    auto it = unique.begin();
    auto itt=unique.rbegin();
 

    
   
    for (int i = 0; i < unique.size()/2; ++i)
    {for (int j= 0; j < n; ++j)
    { 
       if (*itt==s[j])
       {
          s[j]=*it;
       }
       else if (*it==s[j])
       {
          s[j]=*itt;
       }
    }
    itt++;
    it++;
         
    }
  
       

    
    cout << s<< endl;
}
