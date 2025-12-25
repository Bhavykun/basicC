#include <stdio.h>

void mulTable(int number) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n", number, i, number * i);
    }
}

int main() {
    int number;
    scanf("%d", &number);
    mulTable(number);
    return 0;
}