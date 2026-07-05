// This program finds the earliest one of given dates

#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
        int day = 0, mon = 0, year = 0;
        int day_earliest, mon_earliest, year_earliest;
        bool earlier = false;

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &mon, &day, &year);
        day_earliest = day;
        mon_earliest = mon;
        year_earliest = year;
        while (day != 0 && mon != 0 && year != 0) {
                printf("Enter a date (mm/dd/yy): ");
                scanf("%d /%d /%d", &mon, &day, &year);
               
                if (day != 0 && mon != 0 && year != 0) {
                        earlier = false;
                        if (year < year_earliest) earlier = true;
                        else if (year == year_earliest
                                && mon < mon_earliest) earlier = true;
                        else if (year == year_earliest
                                && mon == mon_earliest
                                && day < day_earliest) earlier = true;
        
                        if (earlier) {
                                year_earliest = year;
                                mon_earliest = mon;
                                day_earliest = day;
                        }
                }
        }

        printf("%02d/%02d/%02d is the earliest date\n",
                mon_earliest, day_earliest, year_earliest);

        return 0;
}
