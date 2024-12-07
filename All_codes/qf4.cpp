#include<bits/stdc++.h>

using namespace std;
bool compare(int a, int b) {
    return a > b;}

int main (){

    int a ,b[3]={-1,2,1};

    int size = sizeof(b) / sizeof(b[0]);

    sort(b,b+size,compare);

    b[0]=b[2];

    for (int i = 0; i < size; i++)
    {
        cout<<b[i]<<' ';
    }
    
  


   
}
