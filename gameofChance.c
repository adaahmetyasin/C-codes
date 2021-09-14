// we are gonna play barbut
/*if first sum is 7 or 11 ; win
if first sum is 2-3 or 12 ;lose
if first sum is 4-5-6-8-9 or 10; continue, then you have to get same sum to win, if you get 7 before you get same sum you lose. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status {CONTINUE, WON, LOST};

int rollDice();

int main(){

    int sum;
    int point;

    enum Status gameStatus;

    srand( time( NULL ));

    sum = rollDice();

    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    
    default:
        gameStatus = CONTINUE;
        point = sum;
        printf("Your point is %d:\n", point );
        break;
    }
    while ( CONTINUE == gameStatus)
    {
        sum = rollDice();
        if ( sum == point)
        {
            gameStatus = WON;
        }
        else
        {
            if ( 7 == sum)
            {
                gameStatus = LOST;
            }
            
        }
        
        
    }
    if (WON == gameStatus)
    {
        puts(" Player wins ");
    }
    else
    {
        puts(" Player loses ");
    }
    return 0;
}

int rollDice (){
    int die1, die2, workSum;

    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    workSum = die1 + die2;

    printf("Player rolled %d + %d = %d\n",die1, die2, workSum);
    return workSum;
}