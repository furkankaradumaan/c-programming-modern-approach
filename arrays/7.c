// This progrm reads a 5x5 array and computes the
// row sums and column sums

#include <stdio.h>

#define ROWS 5
#define COLS 5

int main() {
        int num = 0;
        int row_sums[ROWS] = {0};
        int col_sums[COLS] = {0};

        for (int row = 0; row < ROWS; row++) {
                printf("Enter row %d: ", row + 1);
                for (int col = 0; col < COLS; col++) {
                        scanf("%d", &num);
                        row_sums[row] += num;
                        col_sums[col] += num;
                }
        }

        printf("\nRow totals:");
        for (int i = 0; i < ROWS; i++) {
                printf(" %d", row_sums[i]);
        }
        printf("\nColumn totals:");
        for (int i = 0 ; i < COLS; i++) {
                printf(" %d", col_sums[i]);
        }
        printf("\n");

        return 0;
}
