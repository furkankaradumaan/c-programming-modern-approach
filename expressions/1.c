// Reverse the digits of a two-digit number

#include <stdio.h>

int main() {
        int num = 0;
        int reverse = 0;

        printf("Enter a two-digit number: ");
        scanf("%d", &num);

        reverse = (num % 10) * 10;
        reverse += num / 10;

        printf("The reversal is: %d\n", reverse);

        return 0;
}
