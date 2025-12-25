/* ADD */
int add_int_fn(int a, int b) {
    return a + b;
}

float add_float_fn(float a, float b) {
    return a + b;
}

/* SUB */
int sub_int_fn(int a, int b) {
    return a - b;
}

float sub_float_fn(float a, float b) {
    return a - b;
}

/* MUL */
int mul_int_fn(int a, int b) {
    return a * b;
}

float mul_float_fn(float a, float b) {
    return a * b;
}

/* DIV */
int div_int_fn(int a, int b) {
    if (b == 0) return -1;
    return a / b;
}

float div_float_fn(float a, float b) {
    if (b == 0) return -1;
    return a / b;
}

/* MOD */
int mod_int_fn(int a, int b) {
    return a % b;
}
