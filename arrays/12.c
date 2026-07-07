// This program calculates the scrablle value of a word
// using the following table:

#include <ctype.h>
#include <stdio.h>

#define CHARACTERS 26

int main() {
        char ch = '\n';
        int value = 0;
        int values[CHARACTERS] = {
                1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1,
                1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
        };

        printf("Enter a word: ");
        do {
                ch = toupper(getchar());

                if (ch == '\n') break;

                value += values[ch - 'A'];
        } while (ch != '\n');

        printf("Scrabble value: %d\n", value);

        return 0;
}
