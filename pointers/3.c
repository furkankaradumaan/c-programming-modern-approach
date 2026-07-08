// Reduces a fraction to lowest terms.

#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main() {
        int num = 0, denom = 0;
        int reduced_num = 0, reduced_denom = 0;

        printf("Enter a fraction: ");
        scanf("%d /%d", &num, &denom);

        reduce(num, denom, &reduced_num, &reduced_denom);

        printf("In lowest terms: %d/%d\n", reduced_num, reduced_denom);
        
        return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator) {
               
        int num_copy, denom_copy, remainder, gcd;
        
        num_copy = numerator;
        denom_copy = denominator;
        while (num_copy > 0) {
                remainder = denom_copy % num_copy;
                denom_copy = num_copy;
                num_copy = remainder;
        }
        gcd = denom_copy;

        // Divide the terms to GCD to find lowest terms
        *reduced_numerator = numerator / gcd;
        *reduced_denominator = denominator / gcd;
}
