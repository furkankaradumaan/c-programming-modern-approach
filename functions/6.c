// This program calculates the value of a polynomial

#include <stdio.h>

double polynomial(double x) {
        return 3 * x * x * x * x * x
                + 2 * x * x * x * x * x
                - 5 * x * x * x
                - x * x
                + 7 * x
                - 6;
}

int main() {
        double x = 0.0;

        printf("Enter x: ");
        scanf("%lf", &x);

        printf("Result of polynomial: %.2f\n", polynomial(x));

        return 0;
}
