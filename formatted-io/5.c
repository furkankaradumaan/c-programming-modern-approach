// Asks the user to enter numbers from 1 to 16 in any order,
// displays the numbers arranged in a 4x4 matrix and displays
// the sum of all rows, all columns, and all diagonals.
#include <stdio.h>

int main() {
        int number_1 = 0, number_2 = 0, number_3 = 0, number_4 = 0,
            number_5 = 0, number_6 = 0, number_7 = 0, number_8 = 0,
            number_9 = 0, number_10 = 0, number_11 = 0, number_12 = 0,
            number_13 = 0, number_14 = 0, number_15 = 0, number_16 = 0;
        int row_1_sum = 0, row_2_sum = 0, row_3_sum = 0, row_4_sum = 0;
        int col_1_sum = 0, col_2_sum = 0, col_3_sum = 0, col_4_sum = 0;
        int diag_1_sum = 0, diag_2_sum = 0;

        printf("Enter the numbets from 1 to 16 in any order:\n");
        scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
                &number_1, &number_2, &number_3, &number_4, &number_5,
                &number_6, &number_7, &number_8, &number_9, &number_10,
                &number_11, &number_12, &number_13, &number_14, &number_15,
                &number_16);

        row_1_sum = number_1 + number_2 + number_3 + number_4;
        row_2_sum = number_5 + number_6 + number_7 + number_8;
        row_3_sum = number_9 + number_10 + number_11 + number_12;
        row_4_sum = number_13 + number_14 + number_15 + number_16;
        
        col_1_sum = number_1 + number_5 + number_9 + number_13;
        col_2_sum = number_2 + number_6 + number_10 + number_14;
        col_3_sum = number_3 + number_7 + number_11 + number_15;
        col_4_sum = number_4 + number_8 + number_12 + number_16;

        diag_1_sum = number_1 + number_6 + number_11 + number_16;
        diag_2_sum = number_4 + number_7 + number_10 + number_13;
        
        printf("\n");
        printf("%2d %2d %2d %2d\n"
               "%2d %2d %2d %2d\n"
               "%2d %2d %2d %2d\n"
               "%2d %2d %2d %2d\n",
               number_1, number_2, number_3, number_4, number_5, number_6,
               number_7, number_8, number_9, number_10, number_11, number_12,
               number_13, number_14, number_15, number_16);
        
        printf("\nRow sums: %2d %2d %2d %2d\n",
                row_1_sum, row_2_sum, row_3_sum, row_4_sum);
        printf("Column sums: %2d %2d %2d %2d\n",
                col_1_sum, col_2_sum, col_3_sum, col_4_sum);
        printf("Diagonal sums: %2d %2d\n", diag_1_sum, diag_2_sum);

        return 0;
}
