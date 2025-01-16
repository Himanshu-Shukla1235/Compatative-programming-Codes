#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to compute gcd and coefficients using Extended Euclidean Algorithm
int extended_gcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int g = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

// Function to check if ax + by ≡ 0 (mod n) has solutions in the given ranges
bool check_solution_in_range(int a, int b, int n, int x_min, int x_max, int y_min, int y_max) {
    int x0, y0;
    int g = extended_gcd(a, b, x0, y0); // Compute gcd(a, b) and one solution (x0, y0)

    // Check if gcd(a, b) divides n
    if (n % g != 0) {
        return false; // No solutions exist
    }

    // Scale the solution to match the value of n
    x0 *= n / g;
    y0 *= n / g;

    // Coefficients for generating all solutions
    int a_div_g = a / g;
    int b_div_g = b / g;

    // General solution: x = x0 + k * b_div_g, y = y0 - k * a_div_g
    // Solve for k ranges for x
    int k_min_x = ceil((x_min - x0) / (double)b_div_g);
    int k_max_x = floor((x_max - x0) / (double)b_div_g);

    // Solve for k ranges for y
    int k_min_y = ceil((y0 - y_max) / (double)a_div_g);
    int k_max_y = floor((y0 - y_min) / (double)a_div_g);

    // Find the intersection of the k ranges
    int k_min = max(k_min_x, k_min_y);
    int k_max = min(k_max_x, k_max_y);

    // Check if there's a valid k
    if (k_min <= k_max) {
        // Print one solution for verification
        int k = k_min;
        int solution_x = x0 + k * b_div_g;
        int solution_y = y0 - k * a_div_g;
        cout << "One solution is x = " << solution_x << ", y = " << solution_y << endl;
        return true;
    }

    return false;
}

// Driver code
int main() {
    int a = 5, b = 3, n = 2;
    int x_min = 1, x_max = 10;
    int y_min = 1, y_max = 10;

    if (check_solution_in_range(a, b, n, x_min, x_max, y_min, y_max)) {
        cout << "There exists a solution in the given range." << endl;
    } else {
        cout << "No solution exists in the given range." << endl;
    }

    return 0;
}
