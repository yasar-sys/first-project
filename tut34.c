#include <stdio.h>
void printStr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
    printf("\n");
}

int main()
{
    char str[4];
     printf("using the custom value : \n");
    gets(str);
    printf("using custom function prinStr\n");
    printStr(str);
   
    printf("using printf %s\n", str);
    printf("without using percentage ");
    puts(str);

    return 0;
}