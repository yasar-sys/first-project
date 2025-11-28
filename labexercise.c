#include <stdio.h>

int main()
{
    char ch;

    printf("enter the alphabets:\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("the value is a vowel.\n");
        break;
    default:
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf(" %c is a constant.\n", ch);
        }
        else
        {
            printf("invalid format! try with a charecter");
        }
    }

    return 0;
}