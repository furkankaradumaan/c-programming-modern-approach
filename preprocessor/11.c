#include <stdio.h>

#define ERROR(msg, ...) fprintf(stderr, (msg), __VA_ARGS__)

int main() {
        int index = 5;
        ERROR("Range error: index= %d\n", index);

        return 0;
}
