#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countSuneetWins(int a1, int a2, int b1, int b2) {
    int winCount = 0;


    vector<int> suneetCards = {a1, a2};
    vector<int> slavicCards = {b1, b2};

 
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            int s1 = suneetCards[i];
            int s2 = suneetCards[1 - i];
            int l1 = slavicCards[j];
            int l2 = slavicCards[1 - j];

            int suneetWins = 0;
            int slavicWins = 0;

           
            if (s1 > l1) {
                suneetWins++;
            } else if (s1 < l1) {
                slavicWins++;
            }

            if (s2 > l2) {
                suneetWins++;
            } else if (s2 < l2) {
                slavicWins++;
            }

           
            if (suneetWins > slavicWins) {
                winCount++;
            }
        }
    }

    return winCount;
}

void logic() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        cout << countSuneetWins(a1, a2, b1, b2) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    logic();

    return 0;
}
