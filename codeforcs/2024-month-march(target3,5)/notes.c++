// **--------------range based  for llop are used in the compatative programming ---------------------**

#include <iostream>
#include <vector>

int main() {
    // Example 1: Standard for loop
    for (int i = 0; i < 5; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Example 2: Range-based for loop (C++11 and later)
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// **-----used to add the elements of the whole vector --------------------------------------------------------------

#include <iostream>
#include <vector>
#include <numeric>  // Include the <numeric> header for std::accumulate

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using std::accumulate to add all elements of the vector
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    std::cout << "Sum of vector elements: " << sum << std::endl;

    return 0;
}


