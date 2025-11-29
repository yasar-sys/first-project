#include <stdio.h>
int main()
{
    int num;

    printf("enter a valid number\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("the number is even.\n");
    }
    else if (num % 2 != 0)
    {
        printf("the number is odd.\n");
    }

    return 0;
}