// Computes the largest and smallest of 4 integers

#include <stdio.h>

int main() {
        int num1, num2, num3, num4;
        int smallest_first_half;
        int smallest_second_half;
        int largest_first_half; // Largest of num1 and num2
        int largest_second_half;
        int largest, smallest;

        printf("Enter four integers: ");
        scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
        
        // Compute largest and smallest
        if (num1 > num2) {
                largest_first_half = num1;
                smallest_first_half = num2;
        }
        else {
                largest_first_half = num2;
                smallest_first_half = num1;
        }

        if (num3 > num4) {
                largest_second_half = num3;
                smallest_second_half = num4;
        }
        else {
                largest_second_half = num4;
                smallest_second_half = num3;
        }

        if (largest_first_half > largest_second_half) {
                largest = largest_first_half;
        } else {
                largest = largest_second_half;
        }

        if (smallest_first_half < smallest_second_half) {
                smallest = smallest_first_half;
        } else {
                smallest = smallest_second_half;
        }
        
        // display results
        printf("Largest: %d\nSmallest: %d\n", largest, smallest);

        return 0;
}
