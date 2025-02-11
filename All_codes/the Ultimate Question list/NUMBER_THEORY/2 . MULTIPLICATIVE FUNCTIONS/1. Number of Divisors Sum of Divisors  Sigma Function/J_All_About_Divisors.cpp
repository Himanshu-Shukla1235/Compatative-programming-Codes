//*______________________________________________  ||  __________________________________________________
/*
                                             >  V I R U P A K S H  <                                                                                                                                                                   //|
                                                                                                                                                                       //|
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>__           __<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 



*/
#include <bits/stdc++.h>
using namespace std;

//*.......................... macros ................................>

#define ll long long int
#define FOR(i,x, n) for (int i = x; i < (n); ++i)
#define FOR_RE(i, n) for (int i = n-1; i >= 0; --i)
#define AUTO_IT(X)  for(auto &val:X)
#define COUT(x) cout << x << "\n"
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_ODD(x) ((x) % 2 != 0)
const int MOD = 10000007;
const int MAXN = 1000000;

//*.......................... function declarations ................................>
 
void logic(int n); // Time complexity depends on implementation details
 void logic2();
 void logic3();


//*..................................................................................>
/*
 
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
 //* _________________some imp useful functions _______________


 
  || decToBin : TC-logn | SC-logn ||  
  || binpow : TC-logn | SC-O(1) ||  
  || fastfib : TC-logn | SC-O(1) ||  
  || nCr : TC-o(r) | SC-O(1) ||  
  || modExp : TC-o(logb) | SC-O(1) || b->power 
  || modinv : TC-o(logm) | where mis the mod value. 
  || mygcd : TC-o(log(max(a,b)) |     ||
  || mylcm : you can fynd by the use of the mygcd 

 ......NUM_THEORY.....
  ||sieveFunction : TC-o(nlognlogn) || simple funtion of the sieve ||
  || pollardRhoFunc : TC- (n)^1/4  | for  findint he factos   || 
  || eulerTotientSieve : TC- nlognlogn |  counts the integers from 1 to n that are coprime with n || 
  || decimalToBinary : TC - logn |  convert to binary ||
  ||divisorCount1 : TC-logn   || to know the count of divisors ,int includes itself and 1 as well 
  ||divisorCount2 : TC-root(n)   || to know the count of divisors by trial division method  
  ||divisorSum_1: TC-o(root(n).logn ||to know the count of divisors ,int includes itself and 1 as well
  ||divisorSum_1 : TC - o(logn) ||  to know the sum of divisors ,int includes itself and 1 as well

 ...... COMBANOTORICS................
|| PreXorSum : TC - o(n )|  pre xor  sum arrey ||
  
*/
//!________________________________ The search for meaning often leads to ! _______________________________
 vector<int> primes;


void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            if ((long long)i * i <= n)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
    }
}

void logic( int n) {


    long long re = 1;
   
    for (int p : primes) {
        if (p > n) break;
        long long a = 0;
        long long temp = n;
      
        while (temp) {
            temp /= p;
            a += temp;
        }
       
        long long S = ((a + 1) * (a + 2)) / 2; 
        S %= MOD;
        re = (re * S) % MOD;
    }

    cout << re % MOD << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(MAXN);

    
    while (true)
    {
        int n;
        if (!(cin >> n))
            break;
        if (n == 0)
            break;
      
      
        logic(n);
    }
    return 0;
}

//!________________________________ REALIZATION : inherently meaningless!  ______________________________________________
/*
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
*/
//*________________________________ function codes ___________________________________________ >
//*____________________________ Insights____________________________________________________________

// failure: no failure!  ....

// Concept of efficient sol. : just practice mathematics questions   ......

// concpt used by me : jsut simple mathematics logic

// suggestion : speed up ............

// Something New : NO!