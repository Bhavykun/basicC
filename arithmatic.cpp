#include <stdio.h>

#include "funcs.h"
#include "macros.h"

int main() {
    printf("%d\n", add_int(10, 5));   // 15
    printf("%f\n", div_float(5, 2));  // 2.5
    printf("%d\n", mod_int(10, 3));   // 1

    printf("Func add int: %d\n", add_int_fn(10, 5));
    printf("Func div float: %.2f\n", div_float_fn(5.0, 2.0));
    printf("Func mod int: %d\n", mod_int_fn(10, 3));

    return 0;
}
