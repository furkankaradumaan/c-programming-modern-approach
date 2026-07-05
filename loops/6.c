// This program prints all the even squares that are not greater
// than given number

#include <stdio.h>

int main() {
        int bound = 0;
        int square;

        printf("Enter a number: ");
        scanf("%d", &bound);

        for (int i = 2; (square = i * i) <= bound; i += 2) {
                printf("%d\n", square);
        }

        return 0;
}
