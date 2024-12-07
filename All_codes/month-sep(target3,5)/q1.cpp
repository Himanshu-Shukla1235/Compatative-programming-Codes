#include<bits/stdc++.h>

using namespace std ;

int main (){

    int t;

	cin>>t;

	while(t--){
		int a,b;
		cin>>a;
		cin>>b;

        if ((a==1 && b==2)||(a==2 && b==1))
		{
		   cout<<3<<endl;
		  continue;
		}
		else if (a==1 || b==1)
		{
		   cout<<2<<endl;
		  continue;
		}

		else if(a<b){
			cout<<a-1<<endl;
			continue;
		} 

			else if (a>b)
			{
				cout<<b-1<<endl;
				
			}


    }
    return 0;
}

	