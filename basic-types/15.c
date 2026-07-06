// This program computes the factorial of a positive integer.

#include <stdio.h>

int main() {
        int num = 0;
        long factorial;

        printf("Enter a positive number: ");
        scanf("%d", &num);

        factorial = 1;
        for (int i = 2; i <= num; i++) {
                factorial *= i;
        }

        printf("The factorial of %d: %ld\n", num, factorial);

        return 0;
}
