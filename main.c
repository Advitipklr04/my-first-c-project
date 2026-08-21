#include<stdio.h>
int main()
{
    char name[50];
    char subjects[10][50];
    int hours;
    int numberofsubjects;
    int status[10];
    int subjectChoice;
    int menuChoice;
    printf("Enter your name:");
    scanf("%49s",name);
    printf("How many subjects do you have?");
    scanf("%d",&numberofsubjects);
while(numberofsubjects < 1 || numberofsubjects > 10)
{
    printf("Invalid number. Please enter between 1 and 10: ");
    scanf("%d", &numberofsubjects);
}
    for(int i=0;i<numberofsubjects;i++)
    {
        printf("Enter the subject %d:",i+1);
        scanf("%49s",subjects[i]);
        status[i]=0;
    }
    printf("Enter your daily study goal in hours:");
    scanf("%d",&hours);
    menuChoice = 0;
    while(menuChoice!=4)
    {
        printf("\n===== STUDY TRACKER =====\n");
        printf("1. View subjects\n");
        printf("2. Mark subject completed\n");
        printf("3. View study goal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &menuChoice);
        switch(menuChoice)
{
    case 1:
        printf("\nYour subjects are:\n");

for(int i=0; i<numberofsubjects; i++)
{
    if(status[i] == 1)
    {
        printf("%d. %s - Completed\n", i+1, subjects[i]);
    }
    else
    {
        printf("%d. %s - Pending\n", i+1, subjects[i]);
    }
}
        break;

    case 2:
    printf("\nWhich subject did you complete? ");
    scanf("%d", &subjectChoice);

    if (subjectChoice >= 1 && subjectChoice <= numberofsubjects)
    {
        status[subjectChoice - 1] = 1;
        printf("Subject marked as completed!\n");
    }
    else
    {
        printf("Invalid subject number. Please try again.\n");
    }

    break;

    case 3:
        printf("\nYour daily study goal is %d hours.\n", hours);
        break;

    case 4:
        printf("Goodbye!\n");
        break;

    default:
        printf("Invalid choice. Please try again.\n");
}
    }
    return 0;
}