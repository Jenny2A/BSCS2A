#include<stdio.h>

void mulArray();
int main()
{
    mulArray();
    return 0;
}
void mulArray()
{
    int i;
    int product = 0;
    int num[11];

    printf("Input the 10 array: \n");
    for(i = 1; i <= 10; i++)
    {
        +1;
        printf("Enter value %d: ", i);
        scanf("%d", &num[i]);
    }

    printf("\nThe multiplied values are: ");
    printf("\n");

    for(i = 1; i <= 10; ++i)
    {
        +1;
        product = (i - 1) * num[i];
        printf("Value %d: %d\n", i, product);
    }
}
