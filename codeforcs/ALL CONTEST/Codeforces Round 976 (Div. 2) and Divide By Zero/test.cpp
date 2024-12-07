#include <iostream>
#include <cmath>


long long log_base(double a, double b) {
    // Using the change of base formula and converting to long long
    return static_cast<long long>(log(a) / log(b));  // Change of base formula
}

int main() {
    double base = 2.0;
    double value = 5.0;
    long long result = log_base(value, base);  // Log base 2
    std::cout << "log base 2 of 5 = " << result << std::endl; // Outputs truncated result
    return 0;
}
