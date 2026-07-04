// Calculate how many digits a given number contains
// The number will be assumed that it has no more than 4 digits**

#include <stdio.h>

int main() {
        int num = 0;
        int digits = 0;

        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (0 < num && num < 10) digits = 1;
        else if (num < 100) digits = 2;
        else if (num < 1000) digits = 3;
        else digits = 4;

        printf("The number %d has %d digits\n", num, digits);

        return 0;
}
