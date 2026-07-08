// This program calculates the given positive
// integer power of a given number

#include <stdio.h>

double power(double num, int pow);

int main() {
        double base = 0.0;
        int pow = 0;

        printf("Enter base and power: ");
        scanf("%lf %d", &base, &pow);

        printf("%.2lf power %d is %.2lf\n",
                base, pow, power(base, pow));

        return 0;
}

double power(double num, int pow) {
        if (pow == 0) return 1;

        if (pow % 2 == 0) {
                double r = power(num, pow / 2);
                return r * r;
        } else {
                return num * power(num, pow - 1);
        }
}
