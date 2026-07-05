// This program finds an approximation to the Euler
// number using infinite series.

#include <stdio.h>

int main() {
        int terms = 0, factorial;
        float euler_num = 0.0f;

        printf("Enter number of terms: ");
        scanf("%d", &terms);

        for (int i = 0; i < terms; i++) {
                factorial = 1;
                for (int j = i; j > 0; j--) {
                        factorial *= j;
                }

                euler_num += 1.0f / (float)factorial;
        }

        printf("e = %f\n", euler_num);

        return 0;
}
