// Calculates the tax due to the amount of taxable income

#include <stdio.h>

double calculate_income_tax(double taxable_income);

int main() {
        int taxable_income = 0;

        printf("Enter taxable income: ");
        scanf("%d", &taxable_income);

        printf("Tax: %.2f\n", calculate_income_tax(taxable_income));

        return 0;
}

double calculate_income_tax(double taxable_income) {
        if (taxable_income <= 750) {
                return 0.01f * taxable_income;
        } else if (taxable_income <= 2250) {
                return 7.50f + 0.02f * (taxable_income - 750);
        } else if (taxable_income <= 3750) {
                return 37.50f + 0.03 * (taxable_income - 2250);
        } else if (taxable_income <= 5250) {
                return 82.50f + 0.04 * (taxable_income - 3750);
        } else if (taxable_income <= 7000) {
                return 142.50f + 0.05 * (taxable_income - 5250);
        } else {
                return 230.0f + 0.06 * (taxable_income - 7000);
        }
}
