// This program prints a one-month calendar.

#include <stdio.h>

int main() {
        int days = 0, first_day = 0;
        int current_day_of_week;

        printf("Enter number of days in month: ");
        scanf("%d", &days);
        printf("Enter starting day of the month (1=Sun, 7=Sat): ");
        scanf("%d", &first_day);
        
        // First we need to print some spaces if necessary
        for (int i = first_day - 1; i > 0; i--) {
                printf("   ");
        }

        // Now start to print days
        current_day_of_week = first_day;
        for (int i = 1; i <= days; i++) {
                printf("%2d ", i);
                if (current_day_of_week == 7) {
                        printf("\n");
                        current_day_of_week = 1;
                } else {
                        current_day_of_week++;
                }
        }
        printf("\n");

        return 0;
}
