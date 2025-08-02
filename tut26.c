#include <stdio.h>

int main()
{

    printf("lets learn about pointers\n");
    int a;
    a = 8;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("the address of pointer is %p\n", &ptra);
    printf("the address of a is %x\n", &a);
    printf("the value of ptra is %p\n", *ptra);
    printf("the address of ptr2 is %p\n", ptr2);
    printf("the value of a is %d\n", a);
}