// Splits a ISBN number into GS1 prefix, group identifier, publisher code,
// item number, and check digit parts and displays them individually.
#include <stdio.h>

int main() {
        int gs1_prefix = 0;
        int group_id = 0;
        int publisher_code = 0;
        int item_number = 0;
        int check_digit = 0;

        printf("Enter ISBN: ");
        scanf("%d-%d-%d-%d-%d",
                &gs1_prefix, &group_id, &publisher_code,
                &item_number, &check_digit);

        printf("GS1 prefix: %d\n"
               "Group identifier: %d\n"
               "Publisher code: %d\n"
               "Item number: %d\n"
               "Check digit: %d\n",
               gs1_prefix, group_id, publisher_code,
               item_number, check_digit);

        return 0;
}
