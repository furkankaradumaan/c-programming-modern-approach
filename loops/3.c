// Reduces a fraction to lowest terms.

#include <stdio.h>

int main() {
        int num = 0, denom = 0;
        int num_copy, denom_copy, remainder, gcd;
        int reduced_num = 0, reduced_denom = 0;

        printf("Enter a fraction: ");
        scanf("%d /%d", &num, &denom);

        // calculate GCD
        num_copy = num;
        denom_copy = denom;
        while (num_copy > 0) {
                remainder = denom_copy % num_copy;
                denom_copy = num_copy;
                num_copy = remainder;
        }
        gcd = denom_copy;

        // Divide the terms to GCD to find lowest terms
        reduced_num = num / gcd;
        reduced_denom = denom / gcd;

        printf("In lowest terms: %d/%d\n", reduced_num, reduced_denom);
        
        return 0;
}
