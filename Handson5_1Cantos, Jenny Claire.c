#include<stdio.h>

int main()
{
    char letter;
    char *plet;
    int number;
    int *pnum;
    float money;
    float *pmon;

    printf("Enter your favorite letter: ");
    scanf("%c", &letter);
    printf("Enter your favorite number: ");
    scanf("%d", &number);
    printf("Enter your current money: ");
    scanf("%f", &money);

    plet = &letter;
    pnum = &number;
    pmon = &money;

    printf("\nYour favorite is %c letter, its mwmory address is %p \n", *plet, plet);
    printf("Your favorite is %d number, its mwmory address is %p \n", *pnum, pnum);
    printf("Your current money is %.2f, its mwmory address is %p \n", *pmon, pmon);

    return 0;
}

