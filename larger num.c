
#include <stdio.h>

int main()
{
    int A, B, C ,D;

    printf("Enter the numbers A, B, C and D: ");
    scanf("%d %d %d %d", &A, &B, &C, &D );

    if (A>B && A>C && A>D)
        printf("%d is the largest number.\n", A);

    if (B>A && B>C && B>D)
        printf("%d is the largest number.\n", B);

    if (C>A && C>B && C>D)
        printf("%d is the largest number.\n", C);
    if (D>A && D>B && D>C)
        printf("%d is the largest number.\n", D);

    return 0;
}
