// Reads two fractions with a plus sign between them.
// Performs the addition with fractions and displays the
// resulting fraction.
#include <stdio.h>

int main() {
        int num_1 = 0, denom_1 = 0,
            num_2 = 0, denom_2 = 0,
            res_num = 0, res_denom = 0;

        printf("Enter two fractions seperated by a plus sign: ");
        scanf("%d /%d + %d/ %d",
                &num_1, &denom_1, &num_2, &denom_2);
        
        res_num = num_1 * denom_2 + num_2 * denom_1;
        res_denom = denom_1 * denom_2;

        printf("The sum is: %d/%d\n", res_num, res_denom);

        return 0;
}
