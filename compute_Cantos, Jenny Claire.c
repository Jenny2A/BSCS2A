#include<stdio.h>

int main()
{
    int num1 = 20;
    int num2 = 10;

    printf("%d is the first number\n", num1);
    printf("%d is the second number\n", num2);
    printf("\n");

    a();

    return 0;
}
void a(void)
{
    int num1 = 20;
    int num2 = 10;
    int sum;
    int difference;
    int product;

    sum = num1 + num2;

    printf("The sum of two numbers is %d ", sum);
    printf("\n");
    difference = num1 - num2;
    printf("The difference of two numbers is %d ", difference);
    printf("\n");
    product = num1 * num2;
    printf("The product of two numbers is %d ", product);
    printf("\n");

}
