// Reverse a three-digit number

#include <stdio.h>

int main() {
        int num = 0;
        int reverse = 0;

        printf("Enter a three-digit number: ");
        scanf("%d", &num);

        reverse = (num % 10) * 100;
        num /= 10;
        reverse += (num % 10) * 10;
        num /= 10;
        reverse += (num % 10) * 1;

        printf("The reversal is: %d\n", reverse);

        return 0;
}
