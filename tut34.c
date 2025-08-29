#include <stdio.h>

int main()
{
    char str[4];
    printf("using the custom value : \n");
    gets(str);

    printf("using printf %s\n", str);
    printf("here is the value \n");
    puts(str);

    return 0;
}