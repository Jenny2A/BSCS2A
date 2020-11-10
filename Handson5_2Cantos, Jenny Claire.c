#include<stdio.h>

int add(int *a, int *b)
{
    int add;
    add = *a + *b;
    return add;
}
int main()
{
    int a,b;
    int sum;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    sum = add(&a, &b);
    printf("\nThe sum of two numbers is %d", sum);

    return 0;
}
