// Find the largest in a series of numbers.

#include <stdio.h>

int main() {
        float num = 0, largest = 0;

        do {
                printf("Enter a number: ");
                scanf("%f", &num);
                        
                if (num > 0 && num > largest) {
                        largest = num;
                }
        } while (num > 0);

        printf("The largest number entered was %.2f\n", largest);

        return 0;
}
