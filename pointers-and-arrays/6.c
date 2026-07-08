// This program sorts a series
// of numbers using quicksort.

#include <stdio.h>

void quicksort(int *left, int *right);
int *partition(int *left, int *right);

int main() {
        int n;
        
        printf("How many numbers do you want to sort: ");
        scanf("%d", &n);

        int numbers[n];
        int *left = numbers;
        int *right = numbers + n - 1;
        
        printf("Enter %d integers: ", n);
        for (int *i = numbers; i <= right; i++) {
                scanf("%d", i);
        }

        quicksort(left, right);

        printf("In reversed order: ");
        for (int *p = numbers; p < numbers + n; p++) {
                printf(" %d", *p);
        }
        printf("\n");

        return 0;
}

void quicksort(int *left, int *right) {
        if (left >= right) return;

        int *pivot = partition(left, right);
        quicksort(left, pivot - 1);
        quicksort(pivot + 1, right);
}

int *partition(int *left, int *right) {
        int pivot_val = *left;
        while (left <= right) {
                while (left < right && *right > pivot_val) right--;
                if (left == right) break;
                *left = *right;
                left++;

                while (left < right && *left <= pivot_val) left++;
                if (left == right) break;
                *right = *left;
                right--;
        }
        *left = pivot_val;

        return left;
}
