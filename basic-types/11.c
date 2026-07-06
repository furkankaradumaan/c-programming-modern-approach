// This program prints the users name in the following format:
// <last_name> <first_char_of_first_name>.

#include <stdio.h>

int main() {
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
                        putchar(ch);
                }
                ch = getchar();
        } while (ch != ' ' && ch != '\n');
        printf(" %c.\n", first_char_of_first_name);

        return 0;
}
