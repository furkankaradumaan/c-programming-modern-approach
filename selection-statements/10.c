// Converts a numerical grade into a letter grade

#include <stdio.h>

int main() {
        int numerical_grade = 0;

        printf("Enter numerical grade: ");
        scanf("%d", &numerical_grade);
        
        printf("Letter grade: ");
        switch (numerical_grade / 10) {
                case 0:
                        if (numerical_grade < 0) {
                                printf("Grades must be between 0 and 100\n");
                        } else {
                                printf("F\n");
                        }
                        break;

                case 1: case 2: case 3:
                case 4: case 5: 
                        printf("F\n");
                        break;
                case 6:
                        printf("D\n");
                        break;
                case 7:
                        printf("C\n");
                        break;
                case 8:
                        printf("B\n");
                        break;
                case 9:
                        printf("A");
                        break;
                case 10:
                        if (numerical_grade > 100) {
                                printf("Grade must be between 0 and 100\n");
                        } else {
                                printf("A\n");
                        }
                        break;
                default:
                        printf("Grade must be between 0 and 100\n");
        }

        return 0;
}
