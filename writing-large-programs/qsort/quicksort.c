#include "quicksort.h"

void quicksort(int *left, int *right) {
        if (left >= right) return;

        int *pivot = partition(left, right);

        quicksort(left, pivot - 1);
        quicksort(pivot + 1, right);
}

int *partition(int *left, int *right) {
        int pivot_val = *left;

        while (left < right) {
                while (left < right && *right > pivot_val) right--;
                if (left >= right) break;
                *left = *right;
                left++;

                while (left < right && *left <= pivot_val) left++;
                if (left >= right) break;
                *right = *left;
                right--;
        }
        *left = pivot_val;

        return left;
}
