#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v;

    v.push_back(5);
    v.push_back(4);
    v.push_back(3);

    cout << v[0] << " " << v[1] << " " << v[2] << endl;

    v.pop_back();
    cout << v[0] << " " << v[1] << " " << v[2]  <<" "<< &v[1]<< endl;
    v.push_back(7);

    cout << v[0] << " " << v[1] << " " << v[2] << endl;

    return 0;
}