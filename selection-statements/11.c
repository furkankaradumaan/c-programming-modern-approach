// Prints the english word for a givne two-digit number

#include <stdio.h>

int main() {
        int num = 0;

        printf("Enter a two-digit number: ");
        scanf("%d", &num);
        
        printf("You entered the number ");
        if (num > 10 && num < 20) {
                switch (num) {
                        case 11: printf("eleven"); break;
                        case 12: printf("twelve"); break;
                        case 13: printf("thirteen"); break;
                        case 14: printf("fourteen"); break;
                        case 15: printf("fifteen"); break;
                        case 16: printf("sixteen"); break;
                        case 17: printf("seventeen"); break;
                        case 18: printf("eighteen"); break;
                        case 19: printf("nineteen"); break;
                }
                printf("\n");
                return 0;
        }
        switch (num / 10) {
                case 1: printf("ten"); break;
                case 2: printf("twenty"); break;
                case 3: printf("thirty"); break;
                case 4: printf("forty"); break;
                case 5: printf("fifty"); break;
                case 6: printf("sixty"); break;
                case 7: printf("seventy"); break;
                case 8: printf("eighty"); break;
                case 9: printf("ninety"); break;
        }
        switch (num % 10) {
                case 0:
                        if (num == 0) {
                                printf("zero");
                        }
                        break;
                case 1: 
                        if (num > 20) printf("-");
                        printf("one");
                        break;
                case 2:
                        if (num > 20) printf("-");
                        printf("two");
                        break;
                case 3: 
                        if (num > 20) printf("-");
                        printf("three");
                        break;
                case 4: 
                        if (num > 20) printf("-");
                        printf("four");
                        break;
                case 5: 
                        if (num > 20) printf("-");
                        printf("five");
                        break;
                case 6: 
                        if (num > 20) printf("-");
                        printf("six");
                        break;
                case 7: 
                        if (num > 20) printf("-");
                        printf("seven");
                        break;
                case 8: 
                        if (num > 20) printf("-");
                        printf("eight");
                        break;
                case 9: 
                        if (num > 20) printf("-");
                        printf("nine");
                        break;
        }
        printf("\n");

        return 0;
}
