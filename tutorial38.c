#include <stdio.h>
int main()
{
    typedef int *intpointer;

    intpointer a, b;
    int c = 2;

    a = &c;
    b = &c;
    
    printf("printing the value of a and b are %d and %d\n", *a, *b);

    return 0;
}