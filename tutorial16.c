#include<stdio.h>
int main()
{
    int i,age;

    for (i = 0; i<5; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);

        if (age>10)
        {
            continue;
        }

        printf("sunny is a bad boy");

        
    
    }

    return 0;

}