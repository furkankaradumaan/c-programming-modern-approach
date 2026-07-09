#include <stdio.h>
#include "quicksort.h"

int main() {
        int n = 9;
        int nums[] = {6, 2, 6, 10, 9, 2, 5, 1, 3};
        int *left = nums;
        int *right = nums + n - 1;

        quicksort(left, right);
        
        printf("In sorted: ");
        for (int i = 0; i < n; i++) printf(" %d", nums[i]);
        printf("\n");

        return 0;
}
