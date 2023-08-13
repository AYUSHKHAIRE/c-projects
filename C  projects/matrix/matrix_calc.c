#include <stdio.h>
int main()
{
    for (int i = 0; i < 6; i++)
    {

        printf("*********************************\n");
        printf("welcome to matrix calculator !! \n ");
        printf("*********************************\n");
        printf("your matrix format is \n");
        printf(" | a11  a12 |\n | a21  a22 |\n");

        int a11, a12, a21, a22, b11, b12, b21, b22;
        int m11, m12, m21, m22;

        // for matrix a
        printf("*********************************\n");
        printf("enter the value of a11\n");
        scanf("%d", &a11);
        printf("enter the value of a12\n");
        scanf("%d", &a12);
        printf("enter the value of a21\n");
        scanf("%d", &a21);
        printf("enter the value of a22\n");
        scanf("%d", &a22);

        printf("*********************************\n");
        printf("your matrix A is :\n");
        printf("| %d  %d |\n| %d  %d |\n", a11, a12, a21, a22);

        // for matrix B
        printf("*********************************\n");
        printf("your matrix format is \n");
        printf(" | b11  b12 |\n | b21  b22 |\n");

        printf("*********************************\n");
        printf("enter the value of b11\n");
        scanf("%d", &b11);
        printf("enter the value of b12\n");
        scanf("%d", &b12);
        printf("enter the value of b21\n");
        scanf("%d", &b21);
        printf("enter the value of b22\n");
        scanf("%d", &b22);

        printf("*********************************\n");
        printf("your matrix B is :\n");
        printf("| %d  %d |\n| %d  %d |\n", b11, b12, b21, b22);

        printf("*********************************\n");
        printf("*********************************\n");
        printf("enter what operation do you perform :\n A for add\n S for subtract\n M for multiplication\n");
        char A, S, M,D, OP;
        printf("your choice is :\n");
        scanf(" %c", &OP);
        printf("*********************************\n");

        switch (OP)
        {
        case 'A':
            printf("your addition is \n");
            printf("| %d  %d |\n| %d  %d |\n", a11 + b11, a12 + b12, a21 + b21, a22 + b22);
            printf("done!!");
            break;

        case 'S':
            printf("your subtraction is \n");
            printf("| %d  %d |\n| %d  %d |\n", a11 - b11, a12 - b12, a21 - b21, a22 - b22);
            printf("done!!");
            break;

        case 'M':
            m11 = a11 * b11 + a12 * b21;
            m12 = a11 * b12 + a12 * b22;
            m21 = a21 * b11 + a22 * b21;
            m22 = a21 * b12 + a22 * b22;

            printf("the answer of your multiplication is \n");
            printf("| %d  %d |\n| %d  %d |\n", m11, m12, m21, m22);
            printf("done!!\n");
            break;

        default:
            printf("incorrect operator !1\n");
            break;
        }
        printf("*********************************\n");
    }

    return 0;
}