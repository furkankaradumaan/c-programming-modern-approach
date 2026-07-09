#include <stdio.h>

#define STRINGIZE_HELPER(a) #a
#define STRINGIZE(A) STRINGIZE_HELPER(A)
#define LINE_FILE_HELPER(line, file) "Line " STRINGIZE(__LINE__) " of file " __FILE__
#define LINE_FILE LINE_FILE_HELPER(__LINE__, __FILE__)

int main() {
        const char *s = LINE_FILE;

        printf("%s\n", s);

        return 0;
}
