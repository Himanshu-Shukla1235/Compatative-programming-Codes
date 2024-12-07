#include <bits/stdc++.h>
using namespace std;

void logic() {
    long long int n, k;
    cin >> n >> k;
    vector<long long int> v(k);

    for(auto &value: v) {
        cin >> value;
    }

    sort(v.begin(), v.end());
   
    long long int result = (2 * (n - v[k - 1])) - 1;
    result = result - (k - 2);

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        logic();
    }
    return 0;
}

//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: no faliure   ....

//  Concept : In this question we use the greedy  and two pointer concept......

// suggestion : just practice  ............

// Somthing New : NO!