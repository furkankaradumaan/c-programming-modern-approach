// This program checks a message whether it's a palindrome

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_MESSAGE 1024

int main() {
        char message[MAX_MESSAGE];
        const char *end = message + MAX_MESSAGE;
        char *p;
        bool is_palindrome = true;
        
        // read message
        printf("Enter a message: ");
        p = message;
        do {
                *p = tolower(getchar());
                if (*p == '\n') {
                        break;
                } else {
                        p++;
                }
        } while (p < end);
        
        // decide whether it is a palindrome
        for (char *l = message, *r = p - 1; is_palindrome && l < r; ) {
                if (!isalpha(*l)) {
                        l++;
                } else if (!isalpha(*r)) {
                        r--;
                } else if (*l != *r) {
                        is_palindrome = false;
                } else {
                        l++;
                        r--;
                }
        }
        
        // print result
        if (is_palindrome) {
                printf("Palindrome\n");
        } else {
                printf("Not a palindrome\n");
        }

        return 0;
}
