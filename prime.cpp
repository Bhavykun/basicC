#include <stdio.h>

// better for storing primes upto large number.
// void sieve(int n) {
//     int prime[n + 1];

//     for (int i = 0; i <= n; i++) prime[i] = 1;

//     prime[0] = prime[1] = 0;

//     for (int i = 2; i * i <= n; i++) {
//         if (prime[i]) {
//             for (int j = i * i; j <= n; j += i) prime[j] = 0;
//         }
//     }

//     for (int i = 2; i <= n; i++) {
//         if (prime[i]) printf("%d ", i);
//     }
// }

// basic prime takes more time as it goes up to n
//  int isPrime(int n) {
//      if (n <= 1) return 0;
//      for (int i = 2; i < n; i++) {
//          if (n % i == 0)
//              return 0;
//      }
//      return 1;
//  }

// better than the second function upto root n
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// helper function for 2nd and 3rd way
void printPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) printf("%d ", i);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    // sieve(num);
    printf("\n");
    printPrimes(num);

    return 0;
}