// This program converts a given message into B1FF
// speak
//
// A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5

#include <ctype.h>
#include <stdio.h>

#define MAX_MSG 1024
#define EXCLAMATIONS 10 

int main() {
        int len = 0;
        char message[MAX_MSG];

        printf("Enter a message: ");
        while (len < MAX_MSG) {
                message[len] = getchar();
                if (message[len] == '\n') {
                        break;
                };
                len++;
        }
        
        printf("In B1FF speak: ");
        for (int i = 0; i < len; i++) {
                message[i] = toupper(message[i]);
                switch (message[i]) {
                        case 'A': message[i] = '4'; break;
                        case 'B': message[i] = '8'; break;
                        case 'E': message[i] = '3'; break;
                        case 'I': message[i] = '1'; break;
                        case 'O': message[i] = '0'; break;
                        case 'S': message[i] = '5'; break;
                }
                putchar(message[i]);
        }
        for (int i = 0; i < EXCLAMATIONS; i++) {
                putchar('!');
        }
        putchar('\n');
}
