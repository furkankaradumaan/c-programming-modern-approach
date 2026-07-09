// This program counts the number of vowels
// in a sentence

#include <ctype.h>
#include <stdio.h>

#define MAX_SENTENCE 1024

int compute_vowel_count(const char *sentence);

int main() {
        char sentence[MAX_SENTENCE + 1];
        char *ch = sentence;

        printf("Enter a sentence: ");
        do {
                *ch = getchar();
                if (*ch == '\n') {
                        *ch = '\0';
                        break;
                } else {
                        ch++;
                }
        } while (*ch != '\n');
        
        printf("Your sentence contains %d vowels\n", compute_vowel_count(sentence));

        return 0;
}

int compute_vowel_count(const char *sentence) {
        int vowels = 0;

        for (const char *p = sentence; *p; p++) {
                char ch = tolower(*p);
                if (ch == 'a' || ch == 'e' || ch == 'i'
                    || ch == 'o' || ch == 'u') {
                        vowels++;
                }
        }

        return vowels;
}
        
        
