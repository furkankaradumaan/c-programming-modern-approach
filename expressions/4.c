// Convert a number between 0 and 32767 to octal

#include <stdio.h>

int main() {
        int number = 0;
        int octal = 0;

        printf("Enter a number between 0 and 32767: ");
        scanf("%d", &number);

        octal = number % 8;
        number /= 8;
        octal += 10 * (number % 8);
        number /= 8;
        octal += 100 * (number % 8);
        number /= 8;
        octal += 1000 * (number % 8);
        number /= 8;
        octal += 10000 * (number % 8);
        number /= 10;
        
        printf("In octal, your number is: 0%d\n", octal);

        return 0;
}
