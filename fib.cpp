#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int num;
    scanf("%d", &num);
    int first = 0;
    int second = 1;

    // 1 . Optimized way
    //  hard code the first and second fib number
    printf("%d ", first);
    printf("%d ", second);

    // here num-2 done cus, we need more n-2 numbers as first and second numbers
    // are printed above.

    for (int i = 0; i < num - 2; i++) {
        int nextNum = first + second;
        printf("%d ", nextNum);
        first = second;
        second = nextNum;
    }
    printf("\n");

    // 2 . Recursive way
    //  second calling for using the recursive function
    for (int i = 0; i < num; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}