#include <stdio.h>
int A[10][10], B[10][10], M[10][10], a[10][10], s[10][10];
int R1, R2, C1, C2;
char OP, P, Q, R,D;
int adder()
{
    printf("    your addition is \n");
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1; j++)
        {
            a[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < R1; i++)
    {
        printf(" | ");
        for (int j = 0; j < C1; j++)
        {

            printf(" %d ", a[i][j]);
        }
        printf(" | ");
        printf("\n");
    }
}
int subtractor()
{
    printf("    your subtraction is \n");
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1; j++)
        {
            s[i][j] = A[i][j] - B[i][j];
        }
    }
    for (int i = 0; i < R1; i++)
    {
        printf(" | ");
        for (int j = 0; j < C1; j++)
        {

            printf(" %d ", s[i][j]);
        }
        printf(" | ");
        printf("\n");
    }
}
int multiplier()
{
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            for (int k = 0; k < C2; k++)
            {
                M[i][j] = M[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}
int showM()
{
    printf("    the multiplication is \n");
    for (int i = 0; i < R1; i++)
    {
        printf(" | ");
        for (int j = 0; j < C2; j++)
        {
            printf(" %d ", M[i][j]);
        }
        printf(" | ");
        printf("\n");
    }
}
int entA()
{
    printf("    enter the matrix A\n");
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1; j++)
        {
            printf("    enter the position of A[%d,%d]\n", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
}
int entB()
{
    printf("    enter the matrix B\n");
    for (int i = 0; i < R2; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            printf("    enter the position of B[%d,%d]\n", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
}
int showA()
{
    printf("    the matrix A is\n");
    for (int i = 0; i < R1; i++)
    {
        printf(" | ");
        for (int j = 0; j < C1; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf(" | ");
        printf("\n");
    }
}
int showB()
{
    printf("    the matrix B is\n");
    for (int i = 0; i < R2; i++)
    {
        printf(" | ");
        for (int j = 0; j < C2; j++)
        {
            printf(" %d ", B[i][j]);
        }
        printf(" | ");
        printf("\n");
    }
}
int main()
{
    printf("    ****************************************\n");
    printf("    ****************************************\n");
    printf("    ******welcome to matrix calculator******\n");
    printf("    ****************************************\n");
    printf("    ****************************************\n");
    printf("    !you can perform 5 operations at a time!\n");
    printf("    ****************************************\n");
    for (int i = 0; i < 5; i++)
    {
        printf("    ========== C H A N C E   =  %d ==========\n", i + 1);
        printf("\n  you have two matrices A and B \n");
        printf("\n  enter the number of rows A \n");
        scanf("%d", &R1);
        printf("    enter the number of columns in A\n");
        scanf("%d", &C1);
        printf("    enter the number of rows B \n");
        scanf("%d", &R2);
        printf("    enter the number of columns in B\n");
        scanf("%d", &C2);
        printf("    \n\nyou can perform three operations in this calculator\n");
        printf("    P for ADDITION\nQ for SUBTRACTION\nR for MULTIPLICATION\n\n");
        scanf(" %c", &OP);
        printf("\n    ****************************************\n");
        switch (OP)
        {
        case 'P':
        {
            if (R1 != R2 && C1 != C2)
            {
                printf("    you cannot add the funactioin\n");
            }
            else
            {
                entA();
                entB();
                showA();
                showB();
                adder();
            }
        }
        break;
        case 'Q':
        {
            if (R1 != R2 && C1 != C2)
            {
                printf("    you cannot subtract the funactioin\n");
            }
            else
            {
                entA();
                entB();
                showA();
                showB();
                subtractor();
                break;
            }
        }
        case 'R':
        {
            if (C1 != R2)
            {
                printf("    you cant multiply\n");
            }
            else
            {

                entA();
                entB();
                showA();
                showB();
                multiplier();
                showM();
            }
            break;
        }
        case 'D':
        {
            printf("THE determinent\n");
            break;
        }
        default:
            printf("    wrong operator\n");
            break;
        }
        printf("    ****************************************\n");
    }
    printf("   ****************************************\n");
    printf("   ***************limit over***************\n");
    printf("   ****************************************\n");
    return 0;
}