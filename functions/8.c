// This program simulates the game 'Craps'

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DICE_FACES 6
#define DICE_FACES_START 1

#define PLAYER_WON  0
#define PLAYER_LOSE 1
#define CONTINUE    2

int roll_dice();
int play_craps();

int main() {
        char ans;
        int game_res;
        int wins = 0, losses = 0;
        
        srand((unsigned) time(NULL));
        do {
                game_res = play_craps();
                
                if (game_res == PLAYER_LOSE) losses++;
                else wins++;

                printf("Play again? ");
                ans = getchar();
                while (getchar() != '\n')
                        ;

        } while (ans == 'y' || ans == 'Y');
        
        printf("Wins: %d Losses: %d\n", wins, losses);

        return 0;
}

int play_craps() {
        int game_status = CONTINUE;
        int dice1, dice2;
        int dice_total;
        int point;

        dice1 = roll_dice();
        dice2 = roll_dice();
        dice_total = dice1 + dice2;
        printf("You rolled: %d\n", dice_total);

        if (dice_total == 7 || dice_total == 11) {
                game_status = PLAYER_WON;
        } else if (dice_total == 2 || dice_total == 3
                  || dice_total == 12) {
                game_status = PLAYER_LOSE;
        } else {
                printf("Your point is %d\n", dice_total);
                point = dice_total;
        }

        while (game_status == CONTINUE) {
                dice1 = roll_dice();
                dice2 = roll_dice();
                dice_total = dice1 + dice2;
                printf("You rolled: %d\n", dice_total);

                if (dice_total == point) {
                        game_status = PLAYER_WON;
                } else if (dice_total == 7) {
                        game_status = PLAYER_LOSE;
                }
        }

        if (game_status == PLAYER_LOSE) {
                printf("You lose!\n");
        } else {
                printf("You won!\n");
        }

        return game_status;
} 

int roll_dice() {
        return rand() % DICE_FACES + DICE_FACES_START;
}
