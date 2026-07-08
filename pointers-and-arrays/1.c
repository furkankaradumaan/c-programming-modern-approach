// This program reads a message and 
// prints the reversal.

#include <stdio.h>

#define MAX_MESSAGE 1024

int main() {
        char message[MAX_MESSAGE];
        char *p = message;

        printf("Enter a message: ");
        do {
                *p = getchar();
                if (*p == '\n') {
                        break;
                } else {
                        p++;
                }

        } while (p < message + MAX_MESSAGE);
        
        printf("Reversal is: ");
        while (p >= message) {
                printf("%c", *--p);
        }
        printf("\n");

        return 0;
}
