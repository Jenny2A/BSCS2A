#include<stdio.h>

struct cricketer
{
    char name[100];
    int age;
    int test;
    int roll;
    float average;
};
int main()
{
    struct cricketer a[10];
    int i;

    printf("Enter Information of Cricketer\n");
    for(i = 0; i < 10; ++i)
    {
        a[i].roll = i +1;
        printf("\nFor roll number %d\n",a[i].roll);
        printf("Enter Your Name: ");
        scanf("%s", a[i].name);
        printf("Enter Your Age: ");
        scanf("%d", &a[i].age);
        printf("Enter Your Test Matches: ");
        scanf("%d", &a[i].test);
        printf("Enter Your Average Runs: ");
        scanf("%f", &a[i].average);
        printf("\n");
    }
    printf("\nDisplaying Information of Cricketrer: \n");
    for(i = 0; i < 10; ++i)
    {
        printf("\nInformation for Roll Number %d: ", i + 1);
        printf("\nName: ");
        puts(a[i].name);
        printf("Age: %d", a[i].age);
        printf("\nTest Matches: %d\n", a[i].test);
        printf("Marks: %.1f\n", a[i].average);
    }
    return 0;
}
