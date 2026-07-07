// This program reverses a series of numbers

#include <stdio.h>

#define SIZE (sizeof(numbers) / sizeof(numbers[0]))

int main() {
        int n = 0;

        printf("How many numbers do you want to reverse: ");
        scanf("%d", &n);
        
        int numbers[n];
        
        printf("Enter %d numbers: ", n);
        for (int i = 0; i < SIZE; i++) {
                scanf("%d", &(numbers[i]));
        }
        
        printf("Reversed:");
        for (int i = SIZE - 1; i >= 0; i--) {
                printf(" %d", numbers[i]);
        }
        printf("\n");

        return 0;
}
