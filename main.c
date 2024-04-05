#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BOARD_SIZE 100
#define NUM_PLAYERS 2

char square[BOARD_SIZE] = {};



int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int moves = 100, player = 0, compPlayer = 0, snake1 = 16, snake2 = 47, snake3 = 64, snake4 = 93;



    while(player < BOARD_SIZE && compPlayer < BOARD_SIZE)
    {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;

        player += dice1;
        compPlayer += dice2;


        if(player == snake1 || compPlayer == snake1)
        {
            player-=8;
            compPlayer-=8;
        }
        else if(player == snake2 || compPlayer == snake2)
        {
            player-=20;
            compPlayer-=20;
        }
        else if(player == snake3 || compPlayer == snake3)
        {
            player-=30;
            compPlayer-=30;
        }
        else if(player == snake4 || compPlayer == snake4)
        {
            player-=44;
            compPlayer-=44;
        }
        printf("Player: %d, Computer: %d\n", player, compPlayer);
    }

    if(player >= BOARD_SIZE)
    {
        printf("User has won !\n");
    }
    else if (compPlayer >= BOARD_SIZE)
    {
        printf("Computer was won !\n");
    }

    return 0;
}



