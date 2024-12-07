#include <iostream>
#include <set>

int main() {
    std::set<char> mySet = {'a','b','c'};

    // Access the third element of the set
    auto it = mySet.begin(); // Iterator to the first element
    std::advance(it, 2); // Advance the iterator by 2 positions
    if (it != mySet.end()) { // Check if the set is not empty
        int thirdElement = *it; // Dereference the iterator to get the value
        std::cout << "Third element: " << thirdElement << std::endl;
    }

    return 0;
}
