#include<stdio.h>

int main()
{
    char low[100];
    int i;

    printf("Enter String: ");
    gets(low);

    for(i = 0; low[i]>='\0'; i++)
    {
        if(low[i] >= 'a' && low[i] <= 'z')
        {
            low[i] = low[i] - 32;
        }
    }
    printf("\nString in Upper Case is: %s", low);
}
