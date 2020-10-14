#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
/*
Author: Akanate
Purpose: Noughts And Crosses Game
*/



//Function Prototypes
int drawGrid(int x,int turn,int reset);
void markGrid();
char checkWinner(char *game);

//Initialization
int main()
{
    drawGrid(8,2,0); //Call function to start display these values are used to redisplay the grid and are not actual values to be used.
}


char checkWinner(char *game)
{
    /*
        The reason why one print statement is being repeated is because it is giving the most updated version of the grid before telling the user they have won.
    */
    int count = 0;
    if(game[0] == 'X' && game[1] == 'X' && game[2] == 'X'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tCrosses has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    else if(game[0] == 'O' && game[1] == 'O' && game[2] == 'O'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tNoughts has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    if(game[3] == 'X' && game[4] == 'X' && game[5] == 'X'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tCrosses has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    else if(game[3] == 'O' && game[4] == 'O' && game[5] == 'O'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tNoughts has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    if(game[6] == 'X' && game[7] == 'X' && game[8] == 'X'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tCrosses has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);

    }
    else if(game[6] == 'O' && game[7] == 'O' && game[8] == 'O'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tNoughts has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    if(game[0] == 'X' && game[4] == 'X' && game[8] == 'X'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tCrosses has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);

    }
    else if(game[0] == 'O' && game[4] == 'O' && game[8] == 'O'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tNoughts has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    if(game[2] == 'X' && game[4] == 'X' && game[6] == 'X'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tCrosses has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    else if(game[2] == 'O' && game[4] == 'O' && game[6] == 'O'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tNoughts has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    if(game[0] == 'X' && game[3] == 'X' && game[6] == 'X'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tCrosses has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    else if(game[0] == 'O' && game[3] == 'O' && game[6] == 'O'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tNoughts has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    if(game[1] == 'X' && game[4] == 'X' && game[7] == 'X'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tCrosses has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    else if(game[1] == 'O' && game[4] == 'O' && game[7] == 'O'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tNoughts has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    if(game[2] == 'X' && game[5] == 'X' && game[8] == 'X'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tCrosses has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }
    else if(game[2] == 'O' && game[5] == 'O' && game[8] == 'O'){
        system("clear");
        printf("\t\t Welcome to Noughts And Crosses\n\n");
        printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        printf("\n\t\t\tNoughts has won.\n");
        sleep(3);
        system("clear");
        drawGrid(2,2,1);
    }





    //Checks if there is a draw.
    for(int i = 0; i < 11; ++i){
        if(game[i] == 'O' || game[i] == 'X'){
            ++count;
            if(count == 9){
                system("clear");
                printf("\t\t Welcome to Noughts And Crosses\n\n");
                printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
                printf("\n\t\t\tDraw!!.\n");
                sleep(3);
                system("clear");
                drawGrid(2,2,1);

            }
        }
    }
    return 0;

}



int drawGrid(int x,int turn,int reset)
{
    static char game[9] = {'1','2','3','4','5','6','7','8','9'}; //Grid for the game.
    if(reset == 1){
        char reset[9] = {'1','2','3','4','5','6','7','8','9'};
        for(int i = 0; i < 9; ++i){
            game[i] = reset[i];
        }
    }
    if(x > 9 || x < 0 || game[x] == 'O' || game[x] == 'X'){ //Checks for invalid input.
        printf("Invalid Input");
    }
    else{
        //Checks whos turn it is.
        if(turn == 0){
            game[x] = 'X';
            checkWinner(game);
            system("clear");
        }
        else if(turn == 1){
            game[x] = 'O';
            checkWinner(game);
            system("clear");
        }
    }
    printf("\t\t Welcome to Noughts And Crosses\n\n");
    //Grid with values
    printf(" \t\t\t%c | %c | %c \n\t\t\t---------- \n\t\t\t%c | %c | %c \n\t\t\t----------\n\t\t\t%c | %c | %c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
    markGrid();
    return 0;

}


void markGrid()
{
    int value = 0;
    static int turn = 0;
    //Enter values to draw to grid.
    if(turn == 0){
        printf("\t\tYou are crosses enter value: ");
        scanf("%d",&value);
        ++turn;
        drawGrid(value-1,0,0);
    }
    else{
        printf("\t\tYou are noughts enter value: ");
        scanf("%d",&value);
        --turn;
        drawGrid(value-1,1,0);
    }
}


