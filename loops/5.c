// Displays a number with its digits reversed

#include <stdbool.h>
#include <stdio.h>

int main() {
        int number = 0;
        long reversed = 0;
        bool negative;

        printf("Enter a number: ");
        scanf("%d", &number);
        
        // If negative, firstly compute 
        // the first digit in reversed number
        // Otherwise overflow may occur if the number is INT_MIN
        negative = number < 0;
        if (negative) {
                reversed = -(number % 10);
                number /= 10;
                number = -number;
        }
        while (number > 0) {
                reversed *= 10;
                reversed += number % 10;
                number /= 10;
        }
        if (negative) {
                reversed = -reversed;
        }

        printf("Digits reversed: %ld\n", reversed);

        return 0;
}
