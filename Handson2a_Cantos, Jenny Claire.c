#include<stdio.h>

void recPerimiter();

int main()
{
    printf("Getting the Perimeter of a rectangle\n");

    recPerimiter();
}
void recPerimiter()
{
    int length, width, per;

    printf("Enter the Length: ");
    scanf("%d", &length);
    printf("Enter the Width: ");
    scanf("%d", &width);

    per = 2 * (length + width);
    printf("The rectangle perimeter is %d", per);

}
