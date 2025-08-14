#include<stdio.h>
void changevalue(int* address)
{
 *address = 7;
}
int main()
{
    int a = 4 , b = 5;
    printf("the value of a now is %d\n", a);
    changevalue(&a);
    printf("the value of a now is %d\n",a);
    return 0;
}