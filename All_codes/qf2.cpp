#include<bits/stdc++.h>
using namespace std;

class did{
    int id;
    string name;

    public:
    did():id(0),name("aman"){}

    void setdata(int t,string s)
    {
        id=t;
        name=s;
    }
    void showdata()
    {
        cout<<id<<" "<<name<<endl;
    }

};

int main (){

    did aman;

    aman.showdata();
    aman.setdata(1,"aman");
    aman.showdata();


return 0;
 

}