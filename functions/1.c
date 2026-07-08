// This program reads a series of numbers
// and sorts them using a recursive version of selection sort

#include <stdio.h>

void recursive_selection_sort(int n, int nums[n]);

int main() {
        int n;

        printf("How many integers do you want to sort: ");
        scanf("%d", &n);

        int nums[n];
        printf("Enter %d numbers: ", n);
        for (int i = 0; i < n; i++) {
                scanf("%d", &(nums[i]));
        }

        recursive_selection_sort(n, nums);

        printf("In sorted order:");
        for (int i = 0; i < n; i++) {
                printf(" %d", nums[i]);
        }
        printf("\n");

        return 0;
}

void recursive_selection_sort(int n, int nums[n]) {
        if (n <= 1) return;

        int largest_idx = 0;
        for (int i = 1; i < n; i++) {
                if (nums[i] > nums[largest_idx]) largest_idx = i;
        }

        int temp = nums[largest_idx];
        nums[largest_idx] = nums[n - 1];
        nums[n - 1] = temp;
        
        recursive_selection_sort(n - 1, nums);
}
