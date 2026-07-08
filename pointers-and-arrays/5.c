// This program reverses the words in a sentence

#include <ctype.h>
#include <stdio.h>

#define MAX_SENTENCE 1024

int main() {
        char sentence[MAX_SENTENCE];
        char *p;
        char sentence_terminator;

        printf("Enter a sentence: ");
        p = sentence;
        do {
                *p = getchar();
                if (*p == '.' || *p == '!' || *p == '?') {
                        sentence_terminator = *p;
                        break;
                } else {
                        p++;
                }
                
        } while (*p != '.' && *p != '!' && *p != '?');

        char *right = p - 1;
        char *next;
        printf("Reversal of sentence:");
        while (right >= sentence) {
                // Find the beginning of next word
                while (right >= sentence && isspace(*right)) right--;
                while (right >= sentence && !isspace(*right)) right--;
                next = right; // we will continue from here, save it.
                right++;
                
                printf(" ");
                while (right < p && !isspace(*right)) {
                        putchar(*right);
                        right++;
                }
                right = next;
        }
        printf("%c\n", sentence_terminator);

        return 0;
}
