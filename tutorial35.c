
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "sunny";
    char s2[] = "keya";
    char s3[54];
    // puts(strcat(s1, s2));
    printf("the length of s1 is %d\n", strlen(s1));
    printf("the length of s2 is %d\n", strlen(s2));
    // printf("the reverse of s2 is:");
    // puts(strrev(s2));
    // printf("the reverse of s1 is:");
    // puts(strrev(s1));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    printf("the strcmp for s1 and s2 is %d\n", strcmp(s1,s2));
    return 0;
}