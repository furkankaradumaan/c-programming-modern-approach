// This program classifies a poker hand in one of the following categories:
//
//     Straight flush (both a straigh and a flush)
//     four-of-a-kind (four cards of the same rank)
//     full-house (a three-of-a-kind and a pair)
//     flush (five cards of the same suit)
//     straight (five cards of consecutive ranks)
//     three-of-a-kind (three cards of the same rank)
//     two pairs
//     pair (two cards of the same rank)
//     high card (any other hand)
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int pairs;
bool flush, straight;
bool four, three;
bool royal;
bool ace_low;

void read_cards(int cards[NUM_CARDS][2]);
void analyze_cards(int cards[NUM_CARDS][2]);
void print_result();

int main() {
        int cards[NUM_CARDS][2];

        for (;;) {
                read_cards(cards);
                analyze_cards(cards);
                print_result();
        }
}

/* 
 * This function reads a hand into the external variables
 * num_in_rank and num_in_suit.
 * It checks for bad cards and duplicate cards.
 */ 
void read_cards(int cards[NUM_CARDS][2]) {
        char c_rank, c_suit;
        int rank, suit;
        int cards_read = 0;
        bool bad_card, duplicate_card;
        
        // clear num_in_rank and num_in_suit
        for (int i = 0; i < NUM_CARDS; i++) {
                cards[i][0] = -1;
                cards[i][1] = -1;
        }

        while (cards_read < NUM_CARDS) {
                printf("Enter a card: ");
                scanf(" %c%c", &c_rank, &c_suit);
                
                bad_card = false;
                duplicate_card = false;
                switch (c_rank) {
                        case '0': exit(0);
                        case '2': rank = 0; break;
                        case '3': rank = 1; break;
                        case '4': rank = 2; break;
                        case '5': rank = 3; break;
                        case '6': rank = 4; break;
                        case '7': rank = 5; break;
                        case '8': rank = 6; break;
                        case '9': rank = 7; break;
                        case 't': case 'T': rank = 8; break;
                        case 'j': case 'J': rank = 9; break;
                        case 'q': case 'Q': rank = 10; break;
                        case 'k': case 'K': rank = 11; break;
                        case 'a': case 'A': rank = 12; break;
                        default: 
                                printf("bad card, ignored\n");
                                bad_card = true;
                                break;
                }
                if (bad_card) continue;

                switch (c_suit) {
                        case '0': exit(0);
                        case 'c': suit = 0; break;
                        case 'd': suit = 1; break;
                        case 'h': suit = 2; break;
                        case 's': suit = 3; break;
                        default: 
                                printf("bad card, ignored\n");
                                bad_card = true;
                                break;
                }
                if (bad_card) continue;
                
                for (int i = 0; i < NUM_CARDS; i++) {
                        if (cards[i][0] == rank && cards[i][1] == suit) {
                                duplicate_card = true;
                                break;
                        }
                }

                if (duplicate_card) {
                        printf("duplicate card, ignored\n");
                } else {
                        cards[cards_read][0] = rank;
                        cards[cards_read][1] = suit;
                        cards_read++;
                }
        }
}

/*
 * This function analyzes the cards read and
 * put the results in pair, straight, flush,
 * four-of-a-kind, three-of-a-kind.
 */
void analyze_cards(int cards[NUM_CARDS][2]) {
        int num_consec = 0;
        int i = 0;
        
        pairs = 0;
        straight = false;
        flush = false;
        four = three = false;
        royal = false;
        ace_low = false;

        int num_in_rank[NUM_RANKS] = {0};
        int num_in_suit[NUM_SUITS] = {0};        
        for (int i = 0; i < NUM_CARDS; i++) {
                num_in_rank[cards[i][0]]++;
                num_in_suit[cards[i][1]]++;
        }
        
        royal = num_in_rank[8] && num_in_rank[9] && num_in_rank[10]
                && num_in_rank[11] && num_in_rank[12];
        
        ace_low = num_in_rank[0] && num_in_rank[1] && num_in_rank[2]
                && num_in_rank[3] && num_in_rank[12];

        // check for straight
        while (i < NUM_RANKS && num_in_rank[i] == 0) i++;
        while (i < NUM_RANKS && num_in_rank[i] == 1) {
                num_consec++;
                i++;
        }
        straight = num_consec == NUM_CARDS;

        // check for flush
        for (i = 0; i < NUM_SUITS && num_in_suit[i] == 0; i++);
        flush = num_in_suit[i] == NUM_CARDS;

        // check for pairs, four and three
        if (straight) return; // is straight, no chance for a pair, four or three
        for (i = 0; i < NUM_RANKS; i++) {
                if (num_in_rank[i] == 2) pairs++;
                else if (num_in_rank[i] == 3) three = true;
                else if (num_in_rank[i] == 4) four = true;
        }
}

/*
 * This function prints the suitable category
 * for the analyzed hand.
 */
void print_result() {

        if (royal && flush)             printf("Royal flush\n");
        else if (straight && flush)     printf("Straight flush\n");
        else if (four)                  printf("Four of a kind\n");
        else if (three && pairs == 1)   printf("Full house\n");
        else if (flush)                 printf("Flush\n");
        else if (straight)              printf("Straight\n");
        else if (ace_low)               printf("Ace low\n");
        else if (three)                 printf("Three of a kind\n");
        else if (pairs == 2)            printf("Two pairs\n");
        else if (pairs == 1)             printf("Pair\n");
        else                            printf("High card\n");
}
