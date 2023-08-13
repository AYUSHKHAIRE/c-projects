#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int gamebrain(int chc)
{
    srand(time(NULL));
    return rand() % 3;
}
int getyourchoice(int num)
{
    if (num == 0)
    {
        printf(":: ROCK ::\n");
    }
    else if (num == 1)
    {
        printf(":: PAPER ::\n");
    }
    else
    {
        printf(":: SCISSER ::\n");
    }
}

int main()

{
    int num, chc, times, compm;
    char name[10];
    printf("**************************************\n");
    printf("**************************************\n");
    printf("****** WELCOME TO AYUSH GAMERS ****** \n");
    printf("**************************************\n");
    printf("**************************************\n");
    printf("dear player , enter your name :::\n");
    scanf("%s", &name);
    printf("**************************************\n");
    printf("dear %s please enter the times that you want to play\n",name);
    scanf("%d", &times);
    printf("**************************************\n");
    for (int i = 0; i < times; i++)
    {
        printf("**************************************\n");
        printf("**************************************\n");
        printf("dear %s enter your choice\n", name);
        printf("we give hints :::\n");
        printf("0 :: for ROCK\n1 :: for PAPER\n2 :: for SCISSER\n");
        printf("**************************************\n");
        printf("your choice is ::\n");
        scanf("%d", &num);
       // printf("your choice is ::\n");
        getyourchoice(num);
            printf("**************************************\n");

        printf("computers choice is ::\n ");
        gamebrain(chc);
        if (gamebrain(chc) == 0)
        {
            printf("::ROCK::\n");
        }
        else if (gamebrain(chc) == 1)
        {
            printf("::PAPER::\n");
        }
        else
        {
            printf("::SCISSER::\n");
        }
            printf("**************************************\n");

        if ( (gamebrain(chc)==0 && num==1)  ||  (gamebrain(chc)==1 && num==2)  ||  (gamebrain(chc)==2 && num==0))
        {
            printf(":: CONGRATULATIONS !! YOU WIN ::\n");
        }
        else if ( (gamebrain(chc)==0 && num==2)  ||  (gamebrain(chc)==1 && num==0)  ||  (gamebrain(chc)==2 && num==1))
        {
            printf(":: OPPS !! COMPUTER WIN ::\n");
        }
        else
        {
            printf(":: DRAWN THE MATCH ::\n");
        }
        


    }
        printf("**************************************\n");
            printf("**************************************\n");

    return 0;
}