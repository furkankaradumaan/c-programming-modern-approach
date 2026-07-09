#include <stdio.h>
#include "readline.h"

void readline(char *line, int max) {
        char ch;
        int len = 0;

        do {
                ch = getchar();

                if (ch != '\n' && len < max) {
                        line[len++] = ch;
                }
        } while (ch != '\n');
        line[len] = '\0';
}
