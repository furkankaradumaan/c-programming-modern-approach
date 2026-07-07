// This program reverses the words in a sentence

#include <ctype.h>
#include <stdio.h>

#define MAX_SENTENCE 1024

int main() {
        char sentence[MAX_SENTENCE];
        int sen_len = 0;
        char sentence_terminator;
        char ch;

        printf("Enter a sentence: ");
        do {
                ch = getchar();
                if (ch == '.' || ch == '!' || ch == '?') {
                        sentence_terminator = ch;
                        break;
                }
                sentence[sen_len++] = ch;
        } while (ch != '.' && ch != '!' && ch != '?');

        int i = sen_len - 1;
        int next;
        printf("Reversal of sentence: ");
        while (i >= 0) {
                // Find the beginning of next word
                while (i >= 0 && isspace(sentence[i])) i--;
                while (i >= 0 && !isspace(sentence[i])) i--;
                next = i; // we will continue from here, save it.
                i++;
                
                while (i < sen_len && !isspace(sentence[i])) {
                        putchar(sentence[i]);
                        i++;
                }
                printf(" ");
                i = next;
        }
        printf("%c\n", sentence_terminator);

        return 0;
}
