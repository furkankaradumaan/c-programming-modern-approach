// This program displays the given number using
// seven-segment display

#include <ctype.h>
#include <stdbool.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_DIGITS 10
#define NUM_DIGITS 10

void clear_digits_array(void);
void print_digits_array(void);
void process_digit(int digit, int position);

const bool segments[NUM_DIGITS][7] = {
         {true, true, true, true, true, true, false},
         {[1] = true, [2] = true},
         {true, true, false, true, true, false, true},
         {true, true, true, true, [6] = true},
         {false, true, true, [5] = true, [6] = true},
         {true, false, true, true, false, true, true},
         {true, false, true, true, true, true, true},
         {true, true, true},
         {true, true, true, true, true, true, true},
         {true, true, true, true, false, true, true}
};

char digits[4][MAX_DIGITS * 4];

int main(void) {
        int position = 0;
        char ch;
        
        clear_digits_array();
        printf("Enter a number: ");
        do {
                while ((ch = getchar()) == ' ') {
                        if (ch == '\n') break;
                }

                if (isdigit(ch)) {
                        process_digit(ch - '0', position);
                        position++;
                } else if (ch != '-') {
                        break;
                }
        } while (1);

        print_digits_array();
}

void process_digit(int digit, int position) {
        if (position >= MAX_DIGITS) {
                printf("Too many digits\n");
                return;
        }
        
        if (segments[digit][0]) {
                digits[0][position * 4 + 1] = '_';
        }
        if (segments[digit][1]) {
                digits[1][position * 4 + 2] = '|';
        }
        if (segments[digit][2]) {
                digits[2][position * 4 + 2] = '|';
        }
        if (segments[digit][3]) {
                digits[2][position * 4 + 1] = '_';
        }
        if (segments[digit][4]) {
                digits[2][position * 4] = '|';
        }
        if (segments[digit][5]) {
                digits[1][position * 4] = '|';
        }
        if (segments[digit][6]) {
                digits[1][position * 4 + 1] = '_';
        }
}

void print_digits_array() {
        for (int i = 0; i < 4; i++) {
                for (int j = 0; j < MAX_DIGITS * 4; j++) {
                        printf("%c", digits[i][j]);
                }
                printf("\n");
        }
}

void clear_digits_array() {
        for (int i = 0; i < 4; i++) {
                for (int j = 0; j < MAX_DIGITS * 4; j++) {
                        digits[i][j] = ' ';
                }
        }
}
