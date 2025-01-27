#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve_single_test() {
    int n;
    cin >> n;
    
    // Read and store the array
    vector<int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    // Sort for easier processing
    sort(numbers.begin(), numbers.end());
    
    // Find numbers that appear at least twice
    map<int, int> frequency;
    vector<int> duplicates;
    
    for(int num : numbers) {
        frequency[num]++;
        if(frequency[num] == 2) {
            duplicates.push_back(num);
        }
    }
    
    // Case 1: No duplicates found
    if(duplicates.empty()) {
        cout << "-1\n";
        return;
    }
    
    // Case 2: Multiple duplicates found
    if(duplicates.size() > 1) {
        cout << duplicates[0] << " " << duplicates[0] << " "
             << duplicates[1] << " " << duplicates[1] << "\n";
        return;
    }
    
    // Case 3: One duplicate found
    int duplicate_value = duplicates[0];
    
    // Remove the duplicate pair from consideration
    vector<int> remaining;
    int duplicate_count = 2;
    for(int num : numbers) {
        if(num == duplicate_value && duplicate_count > 0) {
            duplicate_count--;
            continue;
        }
        remaining.push_back(num);
    }
    
    // Check for valid pair in remaining numbers
    bool found = false;
    for(int i = 0; i < remaining.size() - 1; i++) {
        if(remaining[i + 1] < remaining[i] + 2 * duplicate_value) {
            cout << duplicate_value << " " << duplicate_value << " "
                 << remaining[i] << " " << remaining[i + 1] << "\n";
            found = true;
            break;
        }
    }
    
    if(!found) {
        cout << "-1\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--) {
        solve_single_test();
    }
    
    return 0;
}