#include <stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("BEFORE THE REVESING PROCESS:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("the value of elements are %d\n", arr[i]);
    }
    arrayRev(arr);
    printf("AFTER THE REVESING PROCESS:\n");

    for (int i = 0; i < 7; i++)
    {
        printf("the value of elements are %d\n", arr[i]);
    }

    return 0;
}