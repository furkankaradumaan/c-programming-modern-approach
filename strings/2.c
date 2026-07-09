// This program prints a monthly reminders
// in sorted order.

#include <stdio.h>
#include <string.h>

#define MAX_MESSAGE 1024
#define MAX_REMINDERS 100

void skip_line();
void read_line(char line[]);

int main() {
        // +5 characters for day, +1 for null character
        // +6 for time
        char reminders[MAX_REMINDERS][MAX_MESSAGE + 12];
        char day_str[6], message[MAX_MESSAGE + 1];
        char hour_str[7];
        int day, num_reminders, i;
        int hour_24, min_24;
        int month;

        num_reminders = 0;
        for(;;) {
                if (num_reminders >= MAX_REMINDERS) {
                        printf("-- No space left --\n");
                        break;
                }

                printf("Enter a day, a 24-hour time and a reminder"
                        "(days should be in month/day form): ");
                scanf("%2d/%2d", &month, &day);
                
                if (day == 0 || month == 0) {
                        break;
                } else if (day < 0 || day > 31 || month < 0
                           || month > 12) {
                        printf("Invalid day  entered\n");
                        skip_line();
                        continue;
                } else {
                        sprintf(day_str, "%02d/%02d", month, day);
                }
                        
                scanf("%2d:%2d", &hour_24, &min_24);
                sprintf(hour_str, " %02d:%02d", hour_24, min_24);

                read_line(message);
                
                for (i = 0; i < num_reminders; i++) {
                        if (strcmp(day_str, reminders[i]) < 0)
                                break;
                }
                for (int j = num_reminders; j > i; j--) {
                        strcpy(reminders[j], reminders[j - 1]);
                }

                strcpy(reminders[i], day_str);
                strcat(reminders[i], hour_str);
                strcat(reminders[i], message);

                num_reminders++;
        }

        printf("   Day  Hour Reminder\n");
        for (i = 0; i < num_reminders; i++) {
                printf(" %s\n", reminders[i]);
        }

        return 0;
}

void read_line(char line[]) {
        char ch;
        int len = 0;

        while (len <= MAX_MESSAGE) {
                ch = getchar();

                if (ch == '\n')
                        break;
                
                line[len++] = ch;
        }
        line[len] = '\0';

        if (ch != '\n') {
                skip_line();
        }
}

void skip_line() {
        char ch;
        while ((ch = getchar()) != '\n')
                ;
}



