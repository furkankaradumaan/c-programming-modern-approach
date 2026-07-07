// This program checks a given number for repeated digits

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
        int number = 0, digit;
        bool seen[10] = {false};

        printf("Enter a number: ");
        scanf("%d", &number);
        
        printf("Repeated digits:");
        do {
                // if number < 0, digit will be < 0, get the abstract value 
                // to get the digit itself
                digit = abs(number % 10);
                if (seen[digit]) {
                        printf(" %d", digit);
                } else {
                        seen[digit] = true;
                }
                number /= 10;
        } while (number != 0);
        printf("\n");

        return 0;
}
