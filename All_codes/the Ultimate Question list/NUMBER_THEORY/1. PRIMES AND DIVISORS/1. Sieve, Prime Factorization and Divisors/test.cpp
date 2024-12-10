Function MillerRabinTest(n, k):
    If n <= 1:
        Return False    // n is not prime
    If n == 2 or n == 3:
        Return True     // n is prime

    Write n-1 as 2^s * d where d is odd

    For i from 1 to k:
        a = Random number between 2 and n-2
        x = powerMod(a, d, n)  // x = a^d % n
        If x == 1 or x == n-1:
            Continue the loop
        
        Repeat s-1 times:
            x = powerMod(x, 2, n)  // Square x mod n
            If x == n-1:
                Break loop
        
        If x != n-1:
            Return False    // n is definitely composite

    Return True  // n is probably prime

