#include <stdio.h>
// int sum(int a, int b)
// {
//   return a + b;

// }

// void prinstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//        printf("%c",'*');
//     }
    
// }


int takenumber()
{

int i;
printf("enter a number\n");
scanf("%d", & i);
return i;


}
int main()
{
int c;
//  int a,b,c;
//  a= 9;
//  b= 87;
//  c = sum(a,b);
// printf("the sum is %d\n",c);

// return 0;

c = takenumber();
printf("print the value%d\n",c);

return 0;

}



