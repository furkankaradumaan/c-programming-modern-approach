// Find the earlier one among two dates

#include <stdbool.h>
#include <stdio.h>

int main() {
        int day1, mon1, year1;
        int day2, mon2, year2;
        bool first_date_earlier = false;
        bool same_dates = false;

        printf("Enter first date (mm/dd/yy): ");
        scanf("%d /%d /%d", &mon1, &day1, &year1);
        printf("Enter second date (mm/dd/yy): ");
        scanf("%d /%d /%d", &mon2, &day2, &year2);

        if (year1 < year2) first_date_earlier = true;
        else if (year1 == year2 && mon1 < mon2) first_date_earlier = true;
        else if (year1 == year2 && mon1 == mon2
                && day1 < day2) first_date_earlier = true;
        same_dates = (year1 == year2) && (mon1 == mon2) && (day1 == day2);
        
        if (same_dates) {
                printf("%02d/%02d/%02d and %02d/%02d/%02d are the same dates\n",
                        mon1, day1, year1, mon2, day2, year2);
        } else if (first_date_earlier) {
                printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                        mon1, day1, year1, mon2, day2, year2);
        } else {
                printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                        mon2, day2, year2, mon1, day1, year1);
        }

        return 0;
}
