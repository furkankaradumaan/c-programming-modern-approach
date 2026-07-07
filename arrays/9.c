// This program generates a random walk in 
// 10x10 array.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10

#define DIRECTIONS 4
#define RIGHT 0
#define UP 1
#define LEFT 2
#define DOWN 3

int main() {
        char walk[ROWS][COLS];
        int curr_row, curr_col;
        char curr_char;
        int direction;
        int available_directions[DIRECTIONS];
        int direction_count;
        
        srand((unsigned) time(NULL));

        for (int r = 0; r < ROWS; r++) {
                for (int c = 0; c < COLS; c++) {
                        walk[r][c] = '.';
                }
        }

        curr_row = curr_col = 0;
        curr_char = 'A';
        walk[curr_row][curr_col] = curr_char;
        curr_char++;
        while (curr_char <= 'Z') {
                // list available available directions
                direction_count = 0;
                if (curr_col + 1 < COLS && walk[curr_row][curr_col + 1] == '.') {
                        available_directions[direction_count++] = RIGHT;
                }
                if (curr_row > 0 && walk[curr_row - 1][curr_col] == '.') {
                        available_directions[direction_count++] = UP;
                }
                if (curr_col > 0 && walk[curr_row][curr_col - 1] == '.') {
                        available_directions[direction_count++] = LEFT;
                }
                if (curr_row + 1 < ROWS && walk[curr_row + 1][curr_col] == '.') {
                        available_directions[direction_count++] = DOWN;
                }
                if (direction_count == 0) break;
                // choose one of available directions
                direction = available_directions[rand() % direction_count];

                switch (direction) {
                        case RIGHT: curr_col++; break;
                        case UP   : curr_row--; break;
                        case LEFT : curr_col--; break;
                        case DOWN : curr_row++; break;
                }

                walk[curr_row][curr_col] = curr_char;
                curr_char++;
        }

        for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLS; j++) {
                        printf(" %c", walk[i][j]);
                }
                printf("\n");
        }

        return 0;
}
