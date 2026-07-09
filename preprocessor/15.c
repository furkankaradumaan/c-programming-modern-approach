#include <stdio.h>

#if defined(ENGLISH)
#define MESSAGE "Insert Disk 1"
#elif defined(FRENCH)
#define MESSAGE "Inserez Le Disque 1"
#elif defined(SPANISH)
#define MESSAGE "Inserte El Disco 1"
#endif

int main() {
        #ifdef MESSAGE
        printf("MESSAGE=%s\n", MESSAGE);
        #else 
        printf("Message is not defined\n");
        #endif

        return 0;
}

