#include <math.h>
#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN + 1];
int line_len = 0, num_words = 0;

void clear_line(void) {
        line_len = 0;
        num_words = 0;
        line[0] = '\0';
}

int space_remaining(void) {
        return MAX_LINE_LEN - line_len;
}

void add_word(const char *word) {
        if (num_words > 0) {
                line[line_len++] = ' ';
                line[line_len] = '\0';
        }
        strcat(line, word);
        line_len += strlen(word);
        num_words++;
}

void write_line(void) {
        int extra_spaces = space_remaining(), spaces_to_insert;

        for (int i = 0; i < line_len; i++) {
                if (line[i] != ' ') {
                        putchar(line[i]);
                } else {
                        #ifdef DISTRIBUTE_GAPS_START_LARGER
                        spaces_to_insert = ceil(extra_spaces / (num_words - 1));
                        #else
                        spaces_to_insert = extra_spaces / (num_words - 1);
                        #endif
                        for (int j = 0; j < spaces_to_insert + 1; j++) {
                                putchar(' ');
                        }
                        num_words--;
                        extra_spaces -= spaces_to_insert;
                }
        }
        putchar('\n');
}

void flush_line(void) {
        if (line_len > 0) {
                puts(line);
        }
}
