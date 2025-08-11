#include <stdio.h>
int main()
{
    

    int option;
    int choose;
    
    label:
    printf("select an option\n");

    printf("press 0 to start triangular star pattern\n");
    printf("press 1 to start reverse triangulart pattern\n");

    scanf("%d", &option);

    switch (option)
    {
    case 0:
        printf("here is your triangular star pattern:\n");
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }

        break;

    case 1:
        printf("here is your reverse triangular star pattern:\n");
        for (int i = 5; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }

        break;

    default:

        printf("invalid number\n");
        break;
    }

   printf("Choose 7 to exit or any number to continue:\n ");
    scanf("%d", &choose);

    if (choose ==7)
    {
     printf("see u next time");
    }
    else
    {
        goto label;
    }
    

    return 0;
}