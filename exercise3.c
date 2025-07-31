#include <stdio.h>
int fibanocci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return (fibanocci(n - 1) + fibanocci(n - 2));
    }
}
int main()
{
    int number;
    printf("enter the number you want to the fibanocci number\n");
    scanf("%d", &number);
    printf("the value of the fibanocci of %d is %d \n", number, fibanocci(number));
    return 0;
}

// #include <stdio.h>

// int iteritive(int n)
// {

//     int a = 0;
//     int b = 1;

//     for (int i = 0; i < n - 1; i++)
//     {
//         b = a + b;
//         a = b - a;
//     }
//     return a;
// }

// int main()
// {

//     int num;

//     printf("Enter the number till which you want the Fibonacci series : ");
//     scanf("%d", &num);
//     printf("the value of the fibanocci of %d is %d \n", num, iteritive(num));

//     return 0;
// }