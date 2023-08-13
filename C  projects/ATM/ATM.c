#include <stdio.h>
int main()
{
    // the pin give 6 chances only
    for (int i = 0; i < 6; i++)
    {
        int PIN, PINS;
        printf("******enter your PIN******\n");
        scanf("%d", &PIN);
        //LET U SET A PIN 
        PINS = 2341;

        //entering the pin to access file
        if (PIN != PINS)
        {
            //IF anyone goes wrong
            printf(" incorrect PIN\n");
        }
        else
        {
            printf("login successful !!\n");
            printf("=========================\n");
            printf("    timepass bank ATM    \n");
            printf("=========================\n");
            printf("welcome to timepass bank \n");
            {
                //here the user will select operation they want
                char operator;
                int dam, cam;
                //dam is debited amount
                //cam is credited amount
                int depo = 100000;

                // LET US CONSIDER THAT USER HAS
                // ALREADY 100000 IN THEIR ACCOUNT
                printf("**********************\n");
                printf("enter an operation \n ");
                printf("**********************\n");
                printf(" C for WITHDRAW cash\n");
                printf(" D for DEPOSIT cash\n");
                printf(" Q for cancelling\n cash\n");
                printf("**********************\n");
                printf("your amount balance is 100000\n");
                printf("**********************\n");
                printf("SELECT your need is : \n");
                scanf(" %c", &operator);

                // HERE THE USER ENTERS WHAT THEY WANT

                switch (operator)
                {
                case 'D':
                    printf("**********************\n");
                    printf("enter the amount that you want to DEPOSIT\n");
                    scanf("%d", &dam);
                    if (dam>70000)
                    {
                        printf("**********************\n");
                        printf("the limit is 70000 \n");
                        printf("please follow instructions\n");
                        printf("**********************\n");
                    }
                    else
                    {
                    printf("**********************\n");
                    printf("please submit the notes \n press Q for EXIT\n");
                    printf("the amount you DEPOSITED is : %d \n", dam);
                    printf("the TOTAL balance in your account is : %d \n", depo + dam);
                    printf("**********************\n");

                    // FOR DEPOSIT
                    }
                    break;
                    

                case 'C':
                    printf("**********************\n");
                    printf("enter the amount that you want to WITHDRAW\n");
                    scanf("%d", &cam);
             
                    if (cam < 100000)
                    {
                        printf("**********************\n");
                        printf("the amount you received is : %d \n", cam);
                        printf("the total REMAINING balance in your account is : %d \n", depo - cam);
                        printf("check  the amount and confirm \n  if annay qurrey dial XXXXXXXXXX");
                        printf("**********************\n");
                        // FOR CLAIMING
                    }
                     //if a cheater tries to widraw more cash
                    else
                    {
                        printf("**********************\n");
                        printf("your amount is NOT sufficient \n you are not able to withdraw\n");
                        printf("**********************\n");
                    }

                    break;

                case 'Q':
                //cancellation of the operation
                    printf("**********************\n");
                    printf("you CANCELLED the PROCESSES \n");
                    printf("**********************\n");

                    // THE GAVED UP USER

                    break;

                default:
                    printf("**********************\n");
                    printf("error !! check your function !! \n");
                    printf("**********************\n");

                    // THE CHEATOR
                }
            }

            printf("=========================\n");
            printf(" thanks for visiting ATM \n");
            printf("=========================\n");
        }
    }
    return 0;
}
