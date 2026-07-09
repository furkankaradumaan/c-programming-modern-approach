#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER_4(x) ((x) % 4)
#define PRODUCT_LESS_THAN_100(x, y) (((x) * (y)) < 100.0)

int main() {
        int x = 9, y = 4;

        printf("Cube %d: %d\n", x, CUBE(x));
        printf("Remainder %d by 4: %d\n", x, REMAINDER_4(x));
        printf("Product Less than 100?  %d, %d: %d\n", x, y,
                        PRODUCT_LESS_THAN_100(x, y));

        return 0;
}
