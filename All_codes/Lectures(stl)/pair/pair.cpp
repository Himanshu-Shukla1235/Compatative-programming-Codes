#include <bits/stdc++.h>

using namespace std;

int main()
{
     pair<int, string> p = {6, "hello"};

     cout << p.first << "\n"
          << p.second << "\n";

     // we can also change the value
     p.first = 7;
     p.second = "himanshu";
     cout << p.first << "\n"
          << p.second;

     // pair<int, string, int> p = {6, "hello", 4};       //this the wrong way
     // cout << p.first << "\n"
     //      << p.second << "\n"
     //      << p.third;
}
