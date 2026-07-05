// Calculates the greatest common divisor of two given integers

#include <stdio.h>

int main() {
        int num1 = 0, num2 = 0;
        int remainder;
        
        printf("Enter two integers: ");
        scanf("%d%d", &num1, &num2);

        while (num1 > 0) {
                remainder = num2 % num1;
                num2 = num1;
                num1 = remainder;
        }

        printf("Greatest common divisor: %d\n", num2);

        return 0;
}
