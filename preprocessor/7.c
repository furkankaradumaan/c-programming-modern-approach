#include <stdio.h>

#define GENERIC_MAX(type)      \
        type type##_max(type a, type b) {\
                return a > b ? a : b;\
        }

typedef unsigned long ulong;
typedef unsigned long long ullong;

GENERIC_MAX(ulong)
GENERIC_MAX(int)
GENERIC_MAX(ullong)
GENERIC_MAX(float)

int main() {
        int a = 4, b = 6;
        float c = 5.2, d = 2.2;
        ulong e = 132312312, f = 13123123432;
        ullong g = 312414121324234, h = 1321314234234;

        printf("a b: %d\n", int_max(a, b));
        printf("c d: %f\n", float_max(c, d));
        printf("e f: %ld\n", ulong_max(e, f));
        printf("g h: %lld\n", ullong_max(g, h));

        return 0;
}
