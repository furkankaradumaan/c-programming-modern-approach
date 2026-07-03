// Reads a date in format "mm/dd/yyyy" and displays it as "yyyymmdd"
#include <stdio.h>

int main() {
        int day = 0, month = 0, year = 0;

        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d /%d /%d", &month, &day, &year);

        printf("You entered the date %04d%02d%02d\n", year, month, day);

        return 0;
}
