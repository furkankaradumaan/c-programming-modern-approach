// This program calculates the average word length for a given sentence

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
        char ch = '\n';
        int word_count = 0;
        int character_count = 0;
        float average_word_length;
        bool inside_word = false;
        
        printf("Enter a sentence: ");
        do {
                ch = getchar();

                if (!isspace(ch)) {
                        character_count++;
                        if (!inside_word) {
                                word_count++;
                                inside_word = true;
                        }
                } else if (inside_word) {
                        inside_word = false;
                }
        } while (ch != '\n');
        average_word_length = (float) character_count / (float) word_count;

        printf("Average word length: %.1f\n", average_word_length);

        return 0;
}
