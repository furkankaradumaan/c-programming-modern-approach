// Convert a 24-hour time into a 12-hour time

#include <stdbool.h>
#include <stdio.h>

int main() {
        int hour_24 = 0, min_24 = 0;
        int hour_12 = 0, min_12 = 0;
        bool pm = false;

        printf("Enter a 24-hour time: ");
        scanf("%d:%d", &hour_24, &min_24);

        if (hour_24 > 12) {
                hour_12 = hour_24 - 12;
        }
        else if (hour_24 == 0) {
                hour_12 = 12;
        }
        else {
                hour_12 = hour_24;
        }
        pm = hour_24 >= 12;
        min_12 = min_24;

        printf("12-hour equivalent is: %02d:%02d", hour_12, min_12);
        if (pm) printf(" PM\n");
        else    printf(" AM\n");

        return 0;
}
