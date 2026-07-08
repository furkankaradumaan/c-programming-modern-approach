// This program tests whether two words are anagrams

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LEN_ALPHABET 26

void read_word(int counts[LEN_ALPHABET]);
bool equal_array(int counts1[LEN_ALPHABET], int counts2[LEN_ALPHABET]);

int main() {
        int word1_frequencies[LEN_ALPHABET] = {0};
        int word2_frequencies[LEN_ALPHABET] = {0};
        bool anagrams;

        printf("Enter first word: ");
        read_word(word1_frequencies);

        printf("Enter second word: ");
        read_word(word2_frequencies);

        if (equal_array(word1_frequencies, word2_frequencies)) {
                printf("The words are anagrams.\n");
        } else {
                printf("The words are not anagrams.\n");
        }

        return 0;
}

void read_word(int counts[LEN_ALPHABET]) {
        char ch = '\0';
        do {
                ch = getchar();
                if (isalpha(ch)) {
                        ch = tolower(ch);
                        counts[ch - 'a']++;
                }
        } while (!isspace(ch));
}

bool equal_array(int counts1[LEN_ALPHABET], int counts2[LEN_ALPHABET]) {
        bool equal = true;
        for (int i = 0; equal && i < LEN_ALPHABET; i++) {
                equal = counts1[i] == counts2[i];
        }
        return equal;
}
