#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Sorted vector
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Value to find the upper bound for
    int value = 25;

    // Find the iterator for the upper bound
    auto it = std::upper_bound(vec.begin(), vec.end(), value);

    // Calculate the index
    if (it != vec.end()) {
        int index = it - vec.begin(); // Iterator arithmetic to get the index
        std::cout << "Upper bound index: " << index << '\n';
    } else {
        std::cout << "No element is greater than " << value << '\n';
    }

    return 0;
}
