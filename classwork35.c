#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50] = "sunny";
    char s2[50] = "arnob";
    char s3[50] = "is a friend of";

    printf("input the value of s1:\n");
    scanf("%s", s1);

    printf("input the value of s2:\n");
    scanf("%s", s2);

    puts(strcat (strcat (s1 , s3), s2));

    return 0;
}