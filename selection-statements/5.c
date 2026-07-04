// Calculates the tax due to the amount of taxable income

#include <stdio.h>

int main() {
        int taxable_income = 0;
        float tax_amount = 0.0f;

        printf("Enter taxable income: ");
        scanf("%d", &taxable_income);

        if (taxable_income <= 750) {
                tax_amount = 0.01f * taxable_income;
        } else if (taxable_income <= 2250) {
                tax_amount = 7.50f + 0.02f * (taxable_income - 750);
        } else if (taxable_income <= 3750) {
                tax_amount = 37.50f + 0.03 * (taxable_income - 2250);
        } else if (taxable_income <= 5250) {
                tax_amount = 82.50f + 0.04 * (taxable_income - 3750);
        } else if (taxable_income <= 7000) {
                tax_amount = 142.50f + 0.05 * (taxable_income - 5250);
        } else {
                tax_amount = 230.0f + 0.06 * (taxable_income - 7000);
        }

        printf("Tax: %.2f\n", tax_amount);

        return 0;
}
