// This program computes total scores and averages
// for 5 grades for each of five students

#include <limits.h>
#include <stdio.h>

#define STUDENTS 5
#define QUIZES   5

int main() {
        int score = 0;
        int total, high, low;
        float average;
        int scores[STUDENTS][QUIZES];

        for (int student = 0; student < STUDENTS; student++) {
                printf("Enter %d grades for student %d: ",
                        QUIZES, student + 1);
                for (int quiz = 0; quiz < QUIZES; quiz++) {
                        scanf("%d", &(scores[student][quiz]));
                }
        }

        // Calculate student statistics
        printf("\nStudent   Total Score    Average\n");
        for (int student = 0; student < STUDENTS; student++) {
                total = 0;
                for (int quiz = 0; quiz < QUIZES; quiz++) {
                        total += scores[student][quiz];
                }
                average = (float)total / QUIZES;

                printf("%4d       %5d          %4.2f\n", student, total, average);
        }
        
        // Calculate quiz statistics
        printf("\nQuiz     Average     High     Low\n");
        for (int quiz = 0; quiz < QUIZES; quiz++) {
                high = 0;
                low = INT_MAX;
                total = 0;
                for (int student = 0; student < STUDENTS; student++) {
                        total += scores[student][quiz];
                        if (scores[student][quiz] > high) {
                                high = scores[student][quiz];
                        }
                        if (scores[student][quiz] < low) {
                                low = scores[student][quiz];
                        }
                }
                average = (float)total / STUDENTS;

                printf("%2d        %5.2f       %2d       %-2d\n",
                        quiz, average, high, low);
        }

        return 0;
}
