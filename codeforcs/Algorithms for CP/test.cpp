
// Function to compute Fibonacci using fast doubling
pair<long long, long long> fib(int n) {
    if (n == 0) {
        return {0, 1};  // Base case: F(0) = 0, F(1) = 1
    }

    // Recursively compute F(k) and F(k+1)
    auto p = fib(n >> 1); // n >> 1 is equivalent to n / 2
    long long c = p.first * (2 * p.second - p.first);  // F(2k) = F(k) * (2*F(k+1) - F(k))
    long long d = p.first * p.first + p.second * p.second;  // F(2k+1) = F(k)^2 + F(k+1)^2

    if (n & 1) {
        return {d, c + d};  // If n is odd, return F(2k+1) and F(2k+2)
    } else {
        return {c, d};  // If n is even, return F(2k) and F(2k+1)
    }
}
