// This program calculates the scrablle value of a word
// using the following table:
// AEILNORSTU: 1 point
// DG        : 2 points
// BCMP      : 3 points
// FHVWY     : 4 points
// K         : 5 points
// JX        : 8 points
// QZ        : 10 points

#include <ctype.h>
#include <stdio.h>

int main() {
        char ch = '\n';
        int value = 0;

        printf("Enter a word: ");
        do {
                ch = getchar();

                if (ch == '\n') break;
                switch (toupper(ch)) {
                        case 'A': case 'E': case 'I':
                        case 'L': case 'N': case 'O':
                        case 'R': case 'S': case 'T': case 'U':
                                value ++;
                                break;
                        case 'D': case 'G':
                                value += 2;
                                break;
                        case 'B': case 'C': case 'M':
                        case 'P':
                                value += 3;
                                break;
                        case 'F': case 'H': case 'V':
                        case 'W': case 'Y':
                                value += 4;
                                break;
                        case 'K':
                                value += 5;
                                break;
                        case 'J': case 'X':
                                value += 8;
                                break;
                        case 'Q': case 'Z':
                                value += 10;
                }
        } while (ch != '\n');

        printf("Scrabble value: %d\n", value);

        return 0;
}
