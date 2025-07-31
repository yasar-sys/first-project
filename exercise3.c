// #include <stdio.h>
// int fibanocci(int n)
// {
// if (n == 1 || n == 2)
// {
//     return 1;
// }
// else
// {
//     return (fibanocci(n - 1) + fibanocci(n - 2));
// }
// }
// int main()
// {
//     int number;
//     printf("enter the number you want to the fibanocci number\n");
//     scanf("%d", &number);
//     printf("the value of the fibanocci of %d is %d \n", number, fibanocci(number));
//     return 0;
// }


#include <stdio.h>

int main()
{
    int a;
    int t1 = 0;
    int t2 = 1;
    int next = t1 + t2;
    
    printf("Enter the number till which you want the Fibonacci series : ");
    scanf("%d", &a);
    printf("The Fibonacci series are %d",next);
    for (int i = 3; i <= a; i++)
    {
        printf(" %d", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    return 0;
}