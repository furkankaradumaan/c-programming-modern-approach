#include <stdio.h>

int main() {
        int digit1 = 0, digit2 = 0, digit3 = 0;

        printf("Enter a three-digit number: ");
        scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

        printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

        return 0;
}
