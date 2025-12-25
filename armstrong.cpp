#include <math.h>
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // armstrong number means get the no.of digits first then get the power of
    // the individual digit and sum them all, if sum==num (given) then armstrong
    // or else not.

    int dup = num;
    int cnt_digits = 0;
    while (dup != 0) {
        dup /= 10;
        cnt_digits++;
    }
    int sum = 0;
    int numCopy = num;
    while (numCopy != 0) {
        int rem = numCopy % 10;
        sum += (int)pow(rem, cnt_digits);
        numCopy /= 10;
    }
    // prints 1 if it is an armstrong number else prints 0 just a boolean value.
    printf("%d \n", sum == num);

    // normal printing (optional)
    if (sum == num) {
        printf("It is an armstrong number");
    } else {
        printf("It is not an armstrong number");
    }
    return 0;
}