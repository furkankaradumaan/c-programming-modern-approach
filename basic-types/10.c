// This program counts the number of vowels
// in a sentence

#include <ctype.h>
#include <stdio.h>

int main() {
        char ch = '\n';
        int vowels;

        vowels = 0;
        printf("Enter a sentence: ");
        do {
                ch = getchar();

                ch = tolower(ch);
                if (ch == 'a' || ch == 'e' || ch == 'i'
                   || ch == 'o' || ch == 'u') {
                        vowels++;
                }
        } while (ch != '\n');
        
        printf("Your sentence contains %d vowels\n", vowels);

        return 0;
}
