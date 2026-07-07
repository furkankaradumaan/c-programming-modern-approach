// This program prints the users name in the following format:
// <last_name> <first_char_of_first_name>.

#include <stdio.h>

#define MAX_LAST_NAME 20 

int main() {
        char formatted[MAX_LAST_NAME + 4];
        int out_len = 0;
        char first_char_of_first_name;
        char ch;
        
        printf("Enter a first name and a last name: ");
        
        scanf(" %c", &first_char_of_first_name);
        while ((ch = getchar()) != ' ') // skip rest of the first name
                ;
        while ((ch = getchar()) == ' ') // skip white space after first name
                ;
        do {
                if (ch != ' ' && ch != '\n') {
                        formatted[out_len++] = ch;
                }
                ch = getchar();
        } while (ch != ' ' && ch != '\n' && out_len < MAX_LAST_NAME - 1);
        formatted[out_len++] = ',';
        formatted[out_len++] = ' ';
        formatted[out_len++] = first_char_of_first_name;
        formatted[out_len++] = '.';
        
        printf("You entered the name: ");
        for (int i = 0; i < out_len; i++) {
                putchar(formatted[i]);
        }
        printf("\n");

        return 0;
}
