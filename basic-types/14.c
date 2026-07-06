// This program calculates the square root of a given positive
// number using Newton's method.

#include <math.h>
#include <stdio.h>

int main() {
        double num = 0.0;
        double sqrt_guess;
        double sqrt_old_guess;

        printf("Enter a positive number: ");
        scanf("%lf", &num);

        if (num < 0) {
                printf("The number must be negative\n");
                return 1;
        }
        sqrt_guess = 1.0; // Initial guess
        do {
                sqrt_old_guess = sqrt_guess;
                sqrt_guess = (sqrt_guess + (num / sqrt_guess)) / 2.0;
                

        } while (fabs(sqrt_old_guess - sqrt_guess) >= 0.00001 * sqrt_guess);
        printf("Square root: %f\n", sqrt_guess);
        
        return 0;
}
