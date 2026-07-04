// Calculates the check digit and decides whether the UPC is valid or not

#include <stdio.h>

int main() {
        int d1, d2, d3, d4, d5, d6,
            d7, d8, d9, d10, d11, check_digit;
        int first_sum, second_sum,
            calculated_check_digit, total;

        printf("Enter the UPC: ");
        scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
                &d1, &d2, &d3, &d4, &d5, &d6, &d7,
                &d8, &d9, &d10, &d11, &check_digit);

        first_sum = d1 + d3 + d5 + d7 + d9 + d11;
        second_sum = d2 + d4 + d6 + d8 + d10;
        total = 3 * first_sum + second_sum;
        calculated_check_digit = 9 - ((total - 1) % 10);

        if (calculated_check_digit == check_digit) {
                printf("VALID\n");
        } else {
                printf("NOT VALID\n");
        }

        return 0;
}
