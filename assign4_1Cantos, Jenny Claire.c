#include<stdio.h>

int main()
{
    int x;
    char array[5][10] = {"J","E","N","N","Y"};

    for(x = 0; x < 5; x++)
    {
        printf("%s\n", array + x);
    }

    return 0;
}
