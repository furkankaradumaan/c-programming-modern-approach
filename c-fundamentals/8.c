// gets a loan amount, yearly interest rate, and monthly payment as input
// and calculates the remaining balance for the next 3 months
#include <stdio.h>

int main() {
        float loan_amount = 0.0f;
        float interest_rate = 0.0f;
        float monthly_interest_rate = 0.0f;
        float monthly_payment = 0.0f;
        float remaining_amount = 0.0f;

        printf("Enter amound of loan: ");
        scanf("%f", &loan_amount);
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        printf("Enter monthly payment: ");
        scanf("%f", &monthly_payment);
        
        remaining_amount = loan_amount;
        monthly_interest_rate = interest_rate / 12.0f / 100.0f;

        remaining_amount *= (1 + monthly_interest_rate);
        remaining_amount -= monthly_payment;
        printf("\nBalance remaining after first month: %.2f\n", remaining_amount);

        remaining_amount *= (1 + monthly_interest_rate);
        remaining_amount -= monthly_payment;
        printf("Balance remaining after second month: %.2f\n", remaining_amount);

        remaining_amount *= (1 + monthly_interest_rate);
        remaining_amount -= monthly_payment;
        printf("Balance remaining after third month: %.2f\n", remaining_amount);
        
        return 0;
}
