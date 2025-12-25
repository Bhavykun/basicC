#include <stdio.h>

int maxi(int a, int b) {
    if (a > b) return a;
    return b;

    // or
    // return a > b ? a : b;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", maxi(a, maxi(b, c)));

    // ternary:
    printf("%d", a > b ? (a > c ? a : c) : (b > c ? b : c));
    return 0;
}
