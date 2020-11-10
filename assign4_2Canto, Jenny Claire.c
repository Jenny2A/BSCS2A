#include<stdio.h>

int main()
{
    int num[5];
    int i, j;
    int sum = 0;

    printf("Enter the array of the element: ");
    for(i = 0; i < 5; ++i)
    {
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }
    printf("\nThe value of all array are: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d", num);
    }

    printf("\nThe value of all array is: %d", sum);

    return 0;
}
