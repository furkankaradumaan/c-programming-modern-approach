#include <stdio.h>

#define CHECK(x, y, n) ((x) >= 0 && (x) <= ((n) - 1) \
                        && (y) >= 0 && (y) <= ((n) - 1))

#define MEDIAN(X, Y, Z) ((X) <= Y && (Y) <= Z) ? (Y) : ((Y) <= (X) && (X) <= (Z) ? (X) : (Z))

#define POLYNOMIAL(x) (3 * (x) * (x) * (x) * (x) * (x) \
                       + 2 * (x) * (x) * (x) * (x) \
                       - 5 * (x) * (x) * (x) * \
                       - (x) * (x) \
                       + 7 * (x) \
                       - 6)

int main() {
        printf("CHECK(4, 7, 10)=%d\n", CHECK(4, 7, 10));
        printf("MEDIAN(4, 7, 10)=%d\n", MEDIAN(4, 7, 10));
        printf("POLYNOMIAL(0)=%d\n", POLYNOMIAL(0));

        return 0;
}
