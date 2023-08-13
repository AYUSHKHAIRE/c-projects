#include <stdio.h>
int main()
{
    printf("welcome to matrix calculator\n");
    printf("our services:\n");
    printf("addition\nsubtraction\nmultiplication\n");
    printf("let start!!\n");
    printf("enter X to operate 2X2 matrix\n");
    printf("enter Y to operate 3X3 matrix\n");
    printf("your choice is:\n");
    char operations, X, Y;
    scanf("%c", &operations);

    switch (operations)
    {
    case 'X':
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
        char A, S, M, D, OP;
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
        break;

    case 'Y':
        // let us run it 10 times
        // to inform the users
        printf("***********************************************\n");
        printf("welcome to ayush matrix operator\n");
        printf("in the operator you have to calculate with 3x3 matrices \n ");
        printf("***********************************************\n");
        printf("the format of your matrix is :\n");
        printf("|a11 a12 a13| \n|a21 a22 a23|\n|a31 a32 a33|\n");
        printf("***********************************************\n");

        // declearing the variables
        int p11, p12, p13, p21, p22, p23, p31, p32, p33;
        int q11, q12, q13, q21, q22, q23, q31, q32, q33;

        // take input from the user
        printf("enter the value of p11\n");
        scanf("%d", &p11);
        printf("enter the value of p12\n");
        scanf("%d", &p12);
        printf("enter the value of p13\n");
        scanf("%d", &p13);
        printf("enter the value of p21\n");
        scanf("%d", &p21);
        printf("enter the value of p22\n");
        scanf("%d", &p22);
        printf("enter the value of p23\n");
        scanf("%d", &p23);
        printf("enter the value of p31\n");
        scanf("%d", &p31);
        printf("enter the value of p32\n");
        scanf("%d", &p32);
        printf("enter the value of p33\n");
        scanf("%d", &p33);

        // to confirmation from the user
        printf("***********************************************\n");
        printf("your given matrix is :\n");
        printf("|%d %d %d| \n|%d %d %d|\n|%d %d %d|\n", p11, p12, p13, p21, p22, p23, p31, p32, p33);
        printf("***********************************************\n");

        printf("enter the value of q11\n");
        scanf("%d", &q11);
        printf("enter the value of q12\n");
        scanf("%d", &q12);
        printf("enter the value of q13\n");
        scanf("%d", &q13);
        printf("enter the value of q21\n");
        scanf("%d", &q21);
        printf("enter the value of q22\n");
        scanf("%d", &q22);
        printf("enter the value of q23\n");
        scanf("%d", &q23);
        printf("enter the value of q31\n");
        scanf("%d", &q31);
        printf("enter the value of q32\n");
        scanf("%d", &q32);
        printf("enter the value of q33\n");
        scanf("%d", &q33);
        printf("***********************************************\n");
        printf("your given matrix is :\n");
        printf("|%d %d %d| \n|%d %d %d|\n|%d %d %d|\n", q11, q12, q13, q21, q22, q23, q31, q32, q33);
        printf("***********************************************\n");
        printf("***********************************************\n");

        // here we will give user options by switch statement
        printf("enter what operation do you perform :\n a for add\n s for subtract\n m for multiplication\n");
        char a, s, m, d, OP3x3;
        printf("your choice is :\n");
        scanf(" %c", &OP3x3);
        printf("***********************************************\n");

        switch (OP3x3)
        {
        case 'a':
            printf("your operator is addition\n");
            printf("your addition is :\n");
            printf("|%d %d %d| \n|%d %d %d|\n|%d %d %d|\n", p11 + q11, p12 + q12, p13 + q13, p21 + q21, p22 + q22, p23 + q23, p31 + q31, p32 + q32, p33 + q33);
            printf("done!!\n");
            break;

        case 's':
            printf("your operator is subtraction\n");
            printf("your subtraction is :\n");
            printf("|%d %d %d| \n|%d %d %d|\n|%d %d %d|\n", p11 - q11, p12 - q12, p13 - q13, p21 - q21, p22 - q22, p23 - q23, p31 - q31, p32 - q32, p33 - q33);
            printf("done!!\n");
            break;

        case 'm':
            printf("your operation is multiplication\n");
            printf("your multiplication is \n");
            int m11, m12, m13, m21, m22, m23, m31, m32, m33;
            m11 = p11 * q11 + p12 * q21 + p13 * q31;
            m12 = p11 * q12 + p12 * q22 + p13 * q32;
            m13 = p11 * q11 + p12 * q23 + p13 * q33;
            m21 = p21 * q11 + p22 * q21 + p23 * q31;
            m22 = p21 * q12 + p22 * q22 + p23 * q33;
            m23 = p21 * q13 + p22 * q23 + p23 * q33;
            m31 = p31 * q11 + p32 * q31 + p33 * q31;
            m32 = p11 * q12 + p32 * q22 + p33 * q32;
            m33 = p31 * q13 + p32 * q23 + p33 * q33;
            printf("|%d %d %d| \n|%d %d %d|\n|%d %d %d|\n", m11, m12, m13, m21, m22, m23, m31, m32, m33);
            printf("done!!\n");
            break;

        default:
            printf("enter the correct operator \n");
            break;
        }
        printf("***********************************************\n");
    }
    return 0;
}