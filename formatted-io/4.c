// Reads a phone number in the form "(xxx) xxx-xxxx"
// and displays it as "xxx.xxx.xxxx"
#include <stdio.h>

int main() {
        int first_3_digit_group = 0;
        int second_3_digit_group = 0;
        int first_4_digit_group = 0;

        printf("Enter a phone number [(xxx) xxx-xxxx]: ");
        scanf("(%3d) %3d-%4d",
                &first_3_digit_group, &second_3_digit_group,
                &first_4_digit_group);

        printf("You entered %03d.%03d.%04d\n",
                first_3_digit_group, second_3_digit_group,
                first_4_digit_group);

        return 0;
}
