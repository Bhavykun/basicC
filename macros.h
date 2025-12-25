/* ADD */
#define DEFINE_ADD(type) \
    type add_##type(type a, type b) { return a + b; }

/* SUB */
#define DEFINE_SUB(type) \
    type sub_##type(type a, type b) { return a - b; }

/* MUL */
#define DEFINE_MUL(type) \
    type mul_##type(type a, type b) { return a * b; }

/* DIV */
#define DEFINE_DIV(type)               \
    type div_##type(type a, type b) {  \
        if (b == 0) return (type) - 1; \
        return a / b;                  \
    }

/* MOD (INT ONLY) */
#define DEFINE_MOD_INT() \
    int mod_int(int a, int b) { return a % b; }

/* Generate functions */
DEFINE_ADD(int)
DEFINE_ADD(float)

DEFINE_SUB(int)
DEFINE_SUB(float)

DEFINE_MUL(int)
DEFINE_MUL(float)

DEFINE_DIV(int)
DEFINE_DIV(float)

DEFINE_MOD_INT()