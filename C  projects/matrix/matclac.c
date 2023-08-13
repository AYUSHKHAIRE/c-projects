#include <stdio.h>
int A[10][10], B[10][10], M[10][10];
int R1, R2, C1, C2;
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
    printf("the multiplication is \n");
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
    printf("enter the matrix A\n");
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1; j++)
        {
            printf("enter the position of A[%d,%d]\n", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
}
int entB()
{
    printf("enter the matrix B\n");
    for (int i = 0; i < R2; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            printf("enter the position of B[%d,%d]\n", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
}
int showA()
{
    printf("the matrix A is\n");
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
    printf("the matrix B is\n");
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
    printf("you have two matrices A and B \n");
    printf("enter the number of rows A \n");
    scanf("%d", &R1);
    printf("enter the number of columns in A\n");
    scanf("%d", &C1);
    printf("enter the number of rows B \n");
    scanf("%d", &R2);
    printf("enter the number of columns in B\n");
    scanf("%d", &C2);
    if (C1 == R2)
    {
        printf("\n");
        entA();
        entB();
        showA();
        showB();
        multiplier();
        showM();
    }
    else
    {
        printf("your matrix cant be multiplied\n");
    }

    return 0;
}