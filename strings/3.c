// This program deals a hand

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_RANKS 13
#define NUM_SUITS 4

int main() {
        const char *ranks[] = {"Two", "Three", "Four", "Five",
                               "Six", "Seven", "Eight", "Nine",
                               "Ten", "Joker", "Queen", "King", "Ace"};
        const char *suits[] = {"clubs", "diamonds", "hearts", "spades"};
        bool seen[NUM_SUITS][NUM_RANKS] = {false};
        int rank, suit;

        int num_cards = 0;
        printf("Enter number of cards in hand: ");
        scanf("%d", &num_cards);
        
        srand((unsigned)time(NULL));
        printf("Your hand:\n");
        while (num_cards > 0) {
                rank = rand() % NUM_RANKS;
                suit = rand() % NUM_SUITS;

                if (!seen[suit][rank]) {
                        printf("%s of %s\n", ranks[rank], suits[suit]);
                        seen[suit][rank] = true;
                        num_cards--;
                }
        }

        return 0;
}
