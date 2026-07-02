// Computes the given amount with 5% tax

#include <stdio.h>

#define TAX_RATE 0.05

int main() {
        float amount = 0.0f;
        float with_tax = 0.0f;

        printf("Enter amount: ");
        scanf("%f", &amount);

        with_tax = amount * (1 + TAX_RATE);

        printf("With tax added: $%.2f\n", with_tax);

        return 0;
}
