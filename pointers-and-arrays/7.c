// This program finds the maximum and minimum items
// in a series of numbers.

#include <limits.h>
#include <stdio.h>

void min_max(int n, int numbers[n], int *min, int *max);

int main() {
        int n;
        int max, min;

        printf("Enter number of integers: ");
        scanf("%d", &n);

        int numbers[n];
        printf("Enter %d numbers: ", n);
        for (int *i = numbers; i < numbers + n; i++) {
                scanf("%d", i);
        }

        min_max(n, numbers, &min, &max);
        printf("Min: %d\nMax: %d\n", min, max);

        return 0;
}

void min_max(int n, int numbers[n], int *min, int *max) {
        *min = INT_MAX;
        *max = INT_MIN;

        for (int *i = numbers; i < numbers + n; i++) {
                if (*i < *min) *min = *i;
                if (*i > *max) *max = *i;
        }
}
