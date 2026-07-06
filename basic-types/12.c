// This program calculates the result of a mathematical
// expression containind +, -, *, /. No operator takes
// precedence over any other operator

#include <stdio.h>

int main() {
        char ch;
        float operand_1 = 0.0f, operand_2 = 0.0f;
        char operator = '\0';
        float result;

        printf("Enter an expression: ");
        result = 0.0f;
        scanf("%f", &operand_1); // Read the first operator
        result = operand_1;
        do {
                if ((ch = getchar()) == '\n' || ch == '\0') {
                        break;
                } else {
                        ungetc(ch, stdin);
                }

                // read operator and second operand
                if (scanf(" %c %f", &operator, &operand_2) != 2) {
                        break;
                }
                switch (operator) {
                        case '+':
                                result += operand_2;
                                break;
                        case '-':
                                result -= operand_2;
                                break;
                        case '*':
                                result *= operand_2;
                                break;
                        case '/':
                                result /= operand_2;
                                break;
                        default:
                                printf("Invalid operator: %c\n", operator);
                                return 1;
                }
        } while (1);
        
        printf("Value of expression: %g\n", result);

        return 0;
}
