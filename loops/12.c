// This program computes the euler number using infinite seriries
// It stops when current term becomes less than 'epsilon'

#include <stdio.h>

int main() {
        float epsilon = 0.0f;
        float euler_number;
        float term;
        int factorial;
        int counter;

        printf("Enter epsilon: ");
        scanf("%f", &epsilon);

        euler_number = 0.0f;
        counter = 0;
        do {
                factorial = 1;
                for (int i = counter; i > 0; i--) factorial *= i;

                term = 1.0f / factorial;
                if (term >= epsilon) {
                        euler_number += term;
                }

                counter++;
        } while (term >= epsilon);

        printf("Euler's number: %f\n", euler_number);

        return 0;
}
