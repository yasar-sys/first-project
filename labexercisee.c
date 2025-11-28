#include<stdio.h>
int main()
{
    int marks;
    printf("enter the student's marls from 0 to 100:\n");
    scanf("%d", &marks);

    if (marks >= 90 && marks<=100)
    {
        printf("You have gained A grade\n");
    }

    else if (marks >= 80)
    {
        printf("You have gained B grade\n");
    }

    else if (marks >= 70)
    {
        printf("You have gained C grade\n");
    }

    else if (marks >= 60)
    {
        printf("You have gained D grade\n");
    }

    else if (marks >= 50)
    {
        printf("You have gained E grade\n");
    }

    else if (marks >= 00)
    {
        printf("You have gained F grade\n");
    }

    else
    {
        printf("invalid format!");
    }
    

    
    
    return 0;
}