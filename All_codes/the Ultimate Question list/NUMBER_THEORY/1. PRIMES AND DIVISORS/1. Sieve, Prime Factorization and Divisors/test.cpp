#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s = "+ 10";
    string num_str = "";

    // Loop through each character and add only digits or the '-' sign
    for (char c : s) {
        if (isdigit(c) || c == '-') {
            num_str += c;
        }
    }

    // Convert the resulting string to an integer
    int num = stoi(num_str);

   
}
