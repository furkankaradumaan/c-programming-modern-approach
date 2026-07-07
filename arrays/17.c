// This program prints a nxn magic square with numbers
// from 1 to n^2 where n is an odd number between 1 and 99.

#include <stdio.h>

#define EMPTY_VALUE -1

int main() {
        int n;
        int row, col, next_row, next_col;
        int current_num;
        int final_num;

        printf("This program creates a magic square of a specified size.\n"
               "The size must be an odd number between 1 and 99.\n");
        printf("Enter size of magic square: ");
        scanf("%d", &n);

        int magic_square[n][n];
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        magic_square[i][j] = EMPTY_VALUE;
                }
        }

        row = 0;
        col = n / 2;
        current_num = 1;
        final_num = n * n;

        do {
                magic_square[row][col] = current_num;
                current_num++;
                
                // If top right square is available, go there
                // if not go 1 square down
                if (current_num <= final_num) {
                        next_row = row > 0 ? row - 1 : n - 1;
                        next_col = col < n - 1 ? col + 1 : 0;
                        if (magic_square[next_row][next_col] == EMPTY_VALUE) {
                                row = next_row;
                                col = next_col;
                        } else {
                                row = (row + 1) % n;
                        }
                }
        } while (current_num <= final_num);

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        printf(" %2d", magic_square[i][j]);
                }
                printf("\n");
        }
}
