// this program computes an interest table for a $100 for a given interest rate
// and next 4 interest rates

#include <math.h>
#include <stdio.h>

#define INITIAL_AMOUNT 100.00
#define NUM_RATES 5

int main() {
        double monthly_interest_rate;
        int num_years, low_rate;
        double value[NUM_RATES];

        printf("Enter monthly interest rate: ");
        scanf("%d", &low_rate);
        printf("Enter number of years: ");
        scanf("%d", &num_years);
        
        for (int i = 0; i < NUM_RATES; i++) {
                value[i] = INITIAL_AMOUNT;
        }

        printf("\nYears");
        for (int i = 0; i < NUM_RATES; i++) {
                printf(" %10d%%", low_rate + i);
        }
        printf("\n");

        for (int year = 1; year <= num_years; year++) {
                printf("%3d   ", year);
                for (int i = 0; i < NUM_RATES; i++) {
                        monthly_interest_rate = pow(1.0 + ((low_rate + i) / 100.0), 12) - 1.0;
                        value[i] *= (1.0 + monthly_interest_rate);
                        printf(" %11.2f", value[i]);
                }
                printf("\n");
        }

        return 0;
}
