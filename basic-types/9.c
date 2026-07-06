// This program converts a 12-hour time into a 24-hour time

#include <stdio.h>

int main() {
        int hour_12, min_12;
        char suffix;
        int hour_24, min_24;

        printf("Enter a 12-hour time: ");
        scanf("%d :%d %c", &hour_12, &min_12, &suffix);

        if (suffix == 'p' || suffix == 'P') {
                if (hour_12 == 12) {
                        hour_24 = 12;
                } else {
                        hour_24 = hour_12 + 12;
                }
        } else {
                if (hour_12 == 12) {
                        hour_24 = 0;
                } else {
                        hour_24 = hour_12;
                }
        }
        min_24 = min_12;

        printf("Equivalent 24-hour time: %d:%d\n", hour_24, min_24);

        return 0;
}
