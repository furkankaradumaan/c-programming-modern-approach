#include <stdio.h>
#include <string.h>
#include "readline.h"

#define MAX_REMINDER 100
#define MAX_MESSAGE_LEN 100

int main() {
        char reminders[MAX_REMINDER][MAX_MESSAGE_LEN + 4];
        char day_str[3], message[MAX_MESSAGE_LEN + 1];
        int day, i;
        int num_reminders = 0;

        for (;;) {
                if (num_reminders == MAX_REMINDER) {
                        printf("-- No space left --\n");
                        break;
                }

                printf("Enter a day and a reminder: ");
                scanf("%2d", &day);

                if (day == 0) break;
                
                readline(message, MAX_MESSAGE_LEN);
                sprintf(day_str, "%2d", day);

                for (i = 0; i < num_reminders; i++) {
                        if (strcmp(day_str, reminders[i]) < 0) break;
                }
                for (int j = num_reminders; j > i; j--) {
                        strcpy(reminders[j], reminders[j-1]);
                }
                strcpy(reminders[i], day_str);
                strcat(reminders[i], message);
                num_reminders++;
        }
        
        printf("Day Reminder\n");
        for (i = 0; i < num_reminders; i++) printf("%s\n", reminders[i]);

        return 0;
}
