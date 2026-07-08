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

#define NUM_FLIGHTS 8

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);
void hour_24_to_12(int hour_24, int min_24, int *hour_12,
                   int *min_12, bool *pm);

const int departure_times[NUM_FLIGHTS] = {
        8 * 60,
        9 * 60 + 43,
        11 * 60 + 19,
        12 * 60 + 47,
        14 * 60,
        15 * 60 + 45,
        19 * 60,
        21 * 60 + 45
};
const int arrival_times[NUM_FLIGHTS] = {
        10 * 60 + 16,
        11 * 60 + 52,
        13 * 60 + 31,
        15 * 60,
        16 * 60 + 8,
        17 * 60 + 55,
        21 * 60 + 20,
        23 * 60 + 58
};

int main() {
        int hour_24, min_24;
        int minutes_since_midnight;
        // Times are calculated as minutes since the midnight
        int closest_departure_time;
        int closest_arrival_time;
        int res_hour_12, res_min_12;
        int res_hour_24, res_min_24;
        bool res_pm;

        printf("Enter a 24-hour time: ");
        scanf("%d:%d", &hour_24, &min_24);

        // Calculate closest flight
        minutes_since_midnight = hour_24 * 60 + min_24;
        
        // Find the closest flight
        find_closest_flight(minutes_since_midnight,
                        &closest_departure_time,
                        &closest_arrival_time);

        printf("Closest departure time is ");
        res_hour_24 = closest_departure_time / 60;
        res_min_24 = closest_departure_time % 60;
        hour_24_to_12(res_hour_24, res_min_24, &res_hour_12,
                      &res_min_12, &res_pm);
        printf("%02d:%02d", res_hour_12, res_min_24);
        if (res_pm) printf(" p.m.");
        else        printf(" a.m.");
        
        printf(", arriving at ");
        res_hour_24 = closest_arrival_time / 60;
        res_min_24 = closest_arrival_time % 60;
        hour_24_to_12(res_hour_24, res_min_24, &res_hour_12, 
                      &res_min_12, &res_pm);
        printf("%02d:%02d", res_hour_12, res_min_12);
        if (res_pm) printf(" p.m.\n");
        else        printf(" a.m.\n");

        return 0;
}

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time) {
        *departure_time = departure_times[0];
        *arrival_time = arrival_times[0];
        int diff; // difference between desired time and closest departure time
        int current_diff;
        int current_departure_time;
        int current_arrival_time;
        
        diff = *departure_time - desired_time;
        if (diff < 0) diff = -diff;
        for (int i = 1; i < NUM_FLIGHTS; i++) {
                current_departure_time = departure_times[i];
                current_arrival_time = arrival_times[i];
                current_diff = current_departure_time - desired_time;
                if (current_diff < 0) current_diff = -current_diff;
                if (current_diff < diff) {
                        diff = current_diff;
                        *departure_time = current_departure_time;
                        *arrival_time = current_arrival_time;
                }
        }
}

void hour_24_to_12(int hour_24, int min_24, int *hour_12,
                   int *min_12, bool *pm) {
        if (hour_24 > 12) {
                *hour_12 = hour_24 - 12;
        } else if (hour_24 == 0) {
                *hour_12 = 12;
        } else {
                *hour_12 = hour_24;
        }
        *pm = hour_24 >= 12;
        *min_12 = min_24;
}
