#include <stdio.h>

int main() {
        float x = 0.0f;
        float result = 0.0f;

        printf("x: ");
        scanf("%f", &x);

        result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

        printf("Result: %.2f\n", result);

        return 0;
}
