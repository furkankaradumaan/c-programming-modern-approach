// Prints the english word for a givne two-digit number

#include <stdio.h>

int main() {
        const char *eleven_to_ninety[] = {"eleven", "twelve", "thirteen",
                                          "fourteen", "fifteen", "sixteen",
                                          "seventeen", "eighteen", "nineteen"};
        const char *tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty",
                              "sixty", "seventy", "eighty", "ninety"};
        const char *digits[] = {"zero", "one", "two", "three", "four", "five",
                                "six", "seven", "eight", "nine"};
        int num = 0;

        printf("Enter a two-digit number: ");
        scanf("%d", &num);
        
        printf("You entered the number ");
        if (num > 10 && num < 20) {
                printf("%s\n", eleven_to_ninety[num - 11]);
                return 0;
        } else if (num == 0) {
                printf("zero");
                return 0;
        }
        
        printf("%s", tens[num / 10]);
        if (num / 10 != 0 && num % 10 != 0) printf("-");
        if (num % 10 != 0) printf("%s", digits[num % 10]);
        printf("\n");

        return 0;
}
