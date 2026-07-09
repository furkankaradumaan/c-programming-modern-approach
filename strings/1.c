// This program finds the smallest and largest 
// in a series of words.

#include <stdio.h>
#include <string.h>

#define MAX_WORD_LEN 20

int main() {
        char smallest_word[MAX_WORD_LEN + 1],
             largest_word[MAX_WORD_LEN + 1];

        char current_word[MAX_WORD_LEN + 1];
        
        printf("Enter a word: ");
        scanf("%s", current_word);
        strcpy(smallest_word, current_word);
        strcpy(largest_word, current_word);
        while (strlen(current_word) != 4) {
                printf("Enter a word: ");
                scanf("%s", current_word);

                if (strcmp(current_word, smallest_word) < 0) {
                        strcpy(smallest_word, current_word);
                } else if (strcmp(current_word, largest_word) > 0) {
                        strcpy(largest_word, current_word);
                }
        }

        printf("\nSmallest word: %s\n", smallest_word);
        printf("largest word: %s\n", largest_word);

        return 0;
}
