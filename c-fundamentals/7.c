#include <stdio.h>

int main() {
        int dollars = 0;
        int twenties = 0, tens = 0, fives = 0, ones = 0;

        printf("Enter a dollar amount: ");
        scanf("%d", &dollars);

        twenties = dollars / 20;
        dollars -= twenties * 20;

        tens = dollars / 10;
        dollars -= tens * 10;

        fives = dollars / 5;
        dollars -= fives * 5;

        ones = dollars;

        printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n",
                twenties, tens, fives, ones);

        return 0;
}
