// This program tests whether two words are anagrams

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LEN_ALPHABET 26

int main() {
        int word1_frequencies[LEN_ALPHABET] = {0};
        int word2_frequencies[LEN_ALPHABET] = {0};
        char ch = '\0';
        bool anagrams;

        printf("Enter first word: ");
        do {
                ch = getchar();
                if (isalpha(ch)) {
                        ch = tolower(ch);
                        word1_frequencies[ch - 'a']++;
                }
        } while (!isspace(ch));

        printf("Enter second word: ");
        do {
                ch = getchar();
                if (isalpha(ch)) {
                        ch = tolower(ch);
                        word2_frequencies[ch - 'a']++;
                }
        } while (!isspace(ch));

        anagrams = true;
        for (int i = 0; anagrams && i < LEN_ALPHABET; i++) {
                anagrams = word1_frequencies[i] == word2_frequencies[i];
        }

        if (anagrams) {
                printf("The words are anagrams.\n");
        } else {
                printf("The words are not anagrams.\n");
        }

        return 0;
}
