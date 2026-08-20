#include<stdio.h>
int main()
{
    char name[50];
    char subject[50];
    int hours;
    printf("Enter your name:");
    scanf("%49s",name);
    printf("Enter your subject:");
    scanf("%49s",subject);
    printf("Enter your daily study goal in hours:");
    scanf("%d",&hours);
    printf("Hello! %s\n",name);
    printf("Your study subject is %s\n",subject);
    printf("Your daily study goal is %d hours\n",hours);
    return 0;
}