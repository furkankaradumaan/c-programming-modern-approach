#include <stdio.h>

#define NELEMS(a) (sizeof(a)/sizeof(a[0]))

int main() {
        int a[] = {1, 0, 4, 2, 6};
        printf("Size a: %zu\n", NELEMS(a));

        return 0;
}
