// gets a loan amount, yearly interest rate, and monthly payment as input
// and calculates the remaining balance for the next 3 months
#include <stdio.h>

int main() {
        float loan_amount = 0.0f;
        float interest_rate = 0.0f;
        float monthly_interest_rate = 0.0f;
        float monthly_payment = 0.0f;
        float remaining_amount = 0.0f;
        int number_of_payments = 0;

        printf("Enter amound of loan: ");
        scanf("%f", &loan_amount);
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        printf("Enter monthly payment: ");
        scanf("%f", &monthly_payment);
        printf("Enter number of payments: ");
        scanf("%d", &number_of_payments);

        remaining_amount = loan_amount;
        monthly_interest_rate = interest_rate / 12.0f / 100.0f;
        printf("\n");
        for (int i = 1; i <= number_of_payments; i++) {
                remaining_amount *= (1 + monthly_interest_rate);
                remaining_amount -= monthly_payment;
                printf("Balance remaining after month %d: %.2f\n",
                        i, remaining_amount);
        }
        
        return 0;
}
