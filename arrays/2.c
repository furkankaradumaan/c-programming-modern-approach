//  This program count the number of occurences of each digit
//  in a number

#include <stdlib.h>
#include <stdio.h>

int main() {
        int number = 0;
        int occurences[10] = {0};
        int digit;

        printf("Enter a number: ");
        scanf("%d", &number);

        do {
                digit = abs(number % 10);
                occurences[digit]++;
                number /= 10;
        } while (number != 0);

        printf("Digit:           ");
        for (int i = 0; i < 10; i++) {
                printf("%-3d", i);
        }
        printf("\nOccurences:      ");
        for (int i = 0; i < 10; i++) {
                printf("%-3d", occurences[i]);
        }
        printf("\n");

        return 0;
}
