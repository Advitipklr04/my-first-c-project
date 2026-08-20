#include<stdio.h>
int main()
{
    char name[50];
    char subjects[10][50];
    int hours;
    int numberofsubjects;
    int status[10];
    int choice;
    printf("Enter your name:");
    scanf("%49s",name);
    printf("How many subjects do you have?");
    scanf("%d",&numberofsubjects);
    for(int i=0;i<numberofsubjects;i++)
    {
        printf("Enter the subject %d:",i+1);
        scanf("%49s",subjects[i]);
        status[i]=0;
    }
    printf("Which subject did you complete?");
    scanf("%d",&choice);
    status[choice-1]=1;
    printf("Enter your daily study goal in hours:");
    scanf("%d",&hours);
    printf("Hello! %s\n",name);
    printf("\nYour subjects are:\n");
    for(int i=0;i<numberofsubjects;i++)
    {
        if(status[i]==1)
        {
            printf("%d. %s - Completed\n",i+1,subjects[i]);
        }
        else
        {
            printf("%d. %s - Pending\n",i+1,subjects[i]);
        }
    }
    printf("Your daily study goal is %d hours\n",hours);
    return 0;
}