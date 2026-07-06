// This program calculates the some of a series of double values

#include <stdio.h>

int main() {
        double num = 0.0, sum = 0.0;
        
        printf("This program calculates the sum of a series of double values\n");
        printf("Enter a series of numbers ending with 0: ");
        do {
                scanf("%lf", &num);
                sum += num;
        } while (num != 0.0);

        printf("Total: %.2f\n", sum);

        return 0;
}
