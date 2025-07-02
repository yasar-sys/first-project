#include <stdio.h>

int main()
{
    int age,aim;
    printf("Enter the age:\n");
    scanf("%d", &age);
printf("Enter the aim:\n");
    scanf("%d", &aim);

    switch (age) {
        case 18:
            printf("rokto gorom beta.\n");
            switch (aim) {
                case 18:
                    printf("aim is to become a kuetian.\n");
                    break;
           
                default:
                printf("not succed.\n");
             }
            break; 

        case 21:
            printf("starts learning society.\n");
            switch (aim) {
                case 21:
                    printf("aim is to become a defence officer.\n");
                    break;
                 default:
                printf("not succed.\n");
            }        
                 break;
        case 23:

            printf("mature.\n");
            break;
        
        
            
    }
    
}