// This program prints a table of squares

#include <stdio.h>

#define BREAK_LEN 24

int main() {
        int n = 0;
        int odd, square;
        int counter;

        printf("This program prints a table of squares\n");
        printf("Enter the number of entries in the table: ");
        scanf("%d", &n);
        getchar(); // Clear the new line character

        odd = 3;
        square = 1;
        counter = 0;
        for (int i = 1; i <= n; i++) {
                counter++;
                printf("%d\t%d\n", i, square);
                square += odd;
                odd += 2;

                if (counter % BREAK_LEN == 0) {
                        printf("Press Enter to continue...");
                        getchar();
                } 
        }

        return 0;
}
