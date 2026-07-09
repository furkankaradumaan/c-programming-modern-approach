#include <stdio.h>
#include "word.h"

char read_char() {
        char ch = getchar();

        if (ch == '\n' || ch == '\t')
                return ' ';
        return ch;
}

void read_word(char *word, int len) {
        char ch;
        int pos = 0;

        while ((ch = read_char()) == ' ')
                ;
        while (ch != ' ' && ch != EOF) {
                if (pos < len) {
                        word[pos++] = ch;
                } else {
                        word[len  - 1] = '*';
                }
                ch = read_char();
        }
        word[pos] = '\0';
}
