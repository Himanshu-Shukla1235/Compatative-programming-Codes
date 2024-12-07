#include <iostream>
#include <vector>
#include <algorithm> // for std::find

int main() {
    // Example vector
    std::vector<int> vec = {2, 4, 6, 8, 10};

    // Target value to search for
    int target = 6;

    // Use std::find to search for target in vec
    auto it = std::find(vec.begin(), vec.end(), target);

    // Check if target was found
    if (it != vec.end()) {
        std::cout<<*it<<*vec.end();
    } else {
        std::cout << "Target " << target << " not found in vector." << std::endl;
    }

    return 0;
}
