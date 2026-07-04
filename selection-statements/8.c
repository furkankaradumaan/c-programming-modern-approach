// Finds the flight whose departure time is closest to given time

// Departure time                Arrival Time
// 8.00 a.m.                    10.16 a.m.
// 9.43 a.m.                    11.52 a.m.
// 11.19 a.m.                   1.31 p.m.
// 12.47 p.m.                   3.00 p.m.
// 2.00 p.m.                    4.08 p.m.
// 3.45 p.m                     5.55 p.m.
// 7.00 p.m.                    9.20 p.m.
// 9.45 p.m.                    11.58 p.m.

#include <stdbool.h>
#include <stdio.h>

int main() {
        int hour_24, min_24;
        int minutes_since_midnight;
        // Times are calculated as minutes since the midnight
        int closest_departure_time;
        int closest_arrival_time;
        int diff; // difference between desired time and closest departure time
        int current_diff;
        int current_departure_time;
        int current_arrival_time;
        int res_hour_12, res_min_12;
        int res_hour_24, res_min_24;
        bool res_pm;

        printf("Enter a 24-hour time: ");
        scanf("%d/%d", &hour_24, &min_24);

        // Calculate closest flight
        minutes_since_midnight = hour_24 * 60 + min_24;
        
        // Accept the first flight as closest
        closest_departure_time = 8 * 60;
        closest_arrival_time = 10 * 60 + 16;
        diff = closest_departure_time - minutes_since_midnight;
        if (diff < 0) diff = -diff;

        current_departure_time = 9 * 60 + 43;
        current_arrival_time = 11 * 60 + 52;
        current_diff = current_departure_time - minutes_since_midnight;
        if (current_diff < 0) current_diff = -current_diff;
        if (current_diff < diff) {
                diff = current_diff;
                closest_departure_time = current_departure_time;
                closest_arrival_time = current_arrival_time;
        }

        current_departure_time = 11 * 60 + 19;
        current_arrival_time = 13 * 60 + 31;
        current_diff = current_departure_time - minutes_since_midnight;
        if (current_diff < 0) current_diff = -current_diff;
        if (current_diff < diff) {
                diff = current_diff;
                closest_departure_time = current_departure_time;
                closest_arrival_time = current_arrival_time;
        }

        current_departure_time = 12 * 60 + 47;
        current_arrival_time = 15 * 60;
        current_diff = current_departure_time - minutes_since_midnight;
        if (current_diff < 0) current_diff = -current_diff;
        if (current_diff < diff) {
                diff = current_diff;
                closest_departure_time = current_departure_time;
                closest_arrival_time = current_arrival_time;
        }

        current_departure_time = 14 * 60;
        current_arrival_time = 16 * 60 + 8;
        current_diff = current_departure_time - minutes_since_midnight;
        if (current_diff < 0) current_diff = -current_diff;
        if (current_diff < diff) {
                diff = current_diff;
                closest_departure_time = current_departure_time;
                closest_arrival_time = current_arrival_time;
        }

        current_departure_time = 15 * 60 + 45;
        current_arrival_time = 17 * 60 + 55;
        current_diff = current_departure_time - minutes_since_midnight;
        if (current_diff < 0) current_diff = -current_diff;
        if (current_diff < diff) {
                diff = current_diff;
                closest_departure_time = current_departure_time;
                closest_arrival_time = current_arrival_time;
        }

        current_departure_time = 19 * 60;
        current_arrival_time = 21 * 60 + 20;
        current_diff = current_departure_time - minutes_since_midnight;
        if (current_diff < 0) current_diff = -current_diff;
        if (current_diff < diff) {
                diff = current_diff;
                closest_departure_time = current_departure_time;
                closest_arrival_time = current_arrival_time;
        }

        current_departure_time = 21 * 60 + 45;
        current_arrival_time = 23 * 60 + 58;
        current_diff = current_departure_time - minutes_since_midnight;
        if (current_diff < 0) current_diff = -current_diff;
        if (current_diff < diff) {
                diff = current_diff;
                closest_departure_time = current_departure_time;
                closest_arrival_time = current_arrival_time;
        }

        printf("Closest departure time is ");
        // convert closest departure time into 12-hour time
        res_hour_24 = closest_departure_time / 60;
        res_min_24 = closest_departure_time % 60;
        if (res_hour_24 > 12) {
                res_hour_12 = res_hour_24 - 12;
        } else if (res_hour_24 == 0) {
                res_hour_12 = 12;
        } else {
                res_hour_12 = res_hour_24;
        }
        res_pm = res_hour_24 >= 12;
        res_min_12 = res_min_24;
        printf("%02d:%02d", res_hour_12, res_min_24);
        if (res_pm) printf(" p.m.");
        else    printf(" a.m.");
        printf(", arriving at ");
        res_hour_24 = closest_arrival_time / 60;
        res_min_24 = closest_arrival_time % 60;
        if (res_hour_24 > 12) {
                res_hour_12 = res_hour_24 - 12;
        } else if (res_hour_24 == 0) {
                res_hour_12 = 12;
        } else {
                res_hour_12 = res_hour_24;
        }
        res_pm = res_hour_24 >= 12;
        res_min_12 = res_min_24;
        printf("%02d:%02d", res_hour_12, res_min_12);
        if (res_pm) printf(" p.m.\n");
        else        printf(" a.m.\n");

        return 0;
}
