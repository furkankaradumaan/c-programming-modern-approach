// This program translates an alphabetic phone number
// into numeric form

#include <ctype.h>
#include <stdio.h>

#define MAX_CHARACTERS 15

int main() {
        char phone_number[MAX_CHARACTERS];
        int num_len = 0;
        char ch = 0;
        int num;

        printf("Enter a phone number: ");
        do {
                ch = toupper(getchar());
                
                if (ch == '\n') break;
                switch (ch) {
                        case 'A': case 'B': case 'C':
                                phone_number[num_len++] = '2';
                                break;
                        case 'D': case 'E': case 'F':
                                phone_number[num_len++] = '3';
                                break;
                        case 'G': case 'H': case 'I':
                                phone_number[num_len++] = '4';
                                break;
                        case 'J': case 'K': case 'L':
                                phone_number[num_len++] = '5';
                                break;
                        case 'M': case 'N': case 'O':
                                phone_number[num_len++] = '6';
                                break;
                        case 'P': case 'R': case 'S':
                                phone_number[num_len++] = '7';
                                break;
                        case 'T': case 'U': case 'V':
                                phone_number[num_len++] = '8';
                                break;
                        case 'W': case 'X': case 'Y':
                                phone_number[num_len++] = '9';
                                break;
                        default:
                                phone_number[num_len++] = ch;
                }
        } while (ch != '\n' && num_len < MAX_CHARACTERS - 1);
        
        printf("In numeric form: ");
        for (int i = 0; i < num_len; i++) {
                putchar(phone_number[i]);
        }
        putchar('\n');

        return 0;
}
