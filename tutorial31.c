#include<stdio.h>
void changevalue(int* x , int* y)
{
 *x = *x + *y ;
 *y = (*x - *y) - *y ;
}
int main()
{
    int a = 4 , b = 3;
    printf("the value of a,b is %d %d\n", a,b);
     changevalue(&a,&b);
    printf("the value of a,b now is %d %d\n",a,b);
    return 0;
}