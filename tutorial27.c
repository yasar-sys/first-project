#include <stdio.h>
int main()
{
    // int a = 34;
    // int *ptra = &a;

    // //printf("%d\n", *ptra);
    // //printf("%d\n", *ptra+1);

    // printf("%d\n", ptra);
    // ptra++;
    // printf("%d\n", ptra);

    // // printf("%p\n", *ptra);
    // // printf("%p\n", *ptra+1);

    // printf("%p\n", ptra);
    // printf("%p\n", ptra+1);

    int arr[] = {1, 2, 3, 4, 5};

    printf("value at the position 3 of the array is :\n");
    printf("%d\n", arr[3]);

    printf("the addres of first element of the array is :\n");
    printf("%d\n", &arr[0]);

    printf("the addres of second element of the array is :\n"); //basic rule of array
    printf("%d\n", &arr[1]);

    printf("the addres of first element of the array is :\n");
    printf("%d\n",  arr+1);


    return 0;

}
