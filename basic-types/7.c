// This program calculates the sum, difference, multiple,
// or division of two fractions based on the given operator
#include <stdio.h>

int main() {
        int num_1 = 0, denom_1 = 0,
            num_2 = 0, denom_2 = 0,
            res_num = 0, res_denom = 0;
        char operator = '\0';

        printf("Enter two fractions seperated by an operator (+, -, *, /): ");
        scanf("%d /%d %c %d/ %d",
                &num_1, &denom_1, &operator, &num_2, &denom_2);
        
        switch (operator) {
                case '+':
                        res_num = num_1 * denom_2 + num_2 * denom_1;
                        res_denom = denom_1 * denom_2;
                        break;
                case '-':
                        res_num = num_1 * denom_2 - num_2 * denom_1;
                        res_denom = denom_1 * denom_2;
                        break;
                case '*':
                        res_num = num_1 * num_2;
                        res_denom = denom_1 * denom_2;
                        break;
                case '/':
                        res_num = num_1 * denom_2;
                        res_denom = num_2 * denom_1;
                        break;
                default:
                        printf("The operator must be one of +, -, *, /");
                        return 1;
        }

        printf("The result is: %d/%d\n", res_num, res_denom);

        return 0;
}
