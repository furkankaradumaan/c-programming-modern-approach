// This program prints a table of squares

#include <stdio.h>

int main() {
        int n = 0;
        int odd, square;

        printf("This program prints a table of squares\n");
        printf("Enter the number of entries in the table: ");
        scanf("%d", &n);

        odd = 3;
        square = 1;
        for (int i = 1; i <= n; i++) {
                printf("%d\t%d\n", i, square);
                square += odd;
                odd += 2;
        }

        return 0;
}
