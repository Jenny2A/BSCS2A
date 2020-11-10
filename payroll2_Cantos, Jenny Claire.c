#include<stdio.h>

void a(void);

int main()
{
    a();
}
void a(void)
{
    float hours;
    float salary;
    float product;

    printf("Enter the numbers of hours: ");
    scanf("%f", &hours);
    printf("Enter the salary per hour: ");
    scanf("%f", &salary);

    product = hours * salary;
    printf("\nThe payroll is %.2f \n", product);

}
