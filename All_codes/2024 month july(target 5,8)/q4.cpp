#include <bits/stdc++.h>
using namespace std;

void logic();

int main() {
    int t;
    cin >> t;
    while (t--) {
        logic();
    }
}

void logic() {
    int n;
    cin >> n;
    int result = 0;
    int max_sum = 0;

    for (int i = 2; i <= n; i++) {
        int current_sum = 0;
        for (int j = 1; j <= n / i; j++) {
            current_sum += i * j;
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
            result = i;
        }
    }
    cout << result << endl;
}
//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: no faliure || takes time  ....

//  Concept : In this question we use the greedy  and two pointer concept......

// suggestion : just practice  ............

// Somthing New : NO!