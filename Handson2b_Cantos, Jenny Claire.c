#include<stdio.h>

void computeExponent();

int main()
{
    void computeExponent();

    float x;
    float a;
    float b;

    printf("Computing the Exponent of the Base\n");

    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter a exponent: ");
    scanf("%f", &b);

    x = pow(a,b);
    printf("\n%.1f is raised to the %.1f the power is %.2f", a, b, x);

    return 0;
}
