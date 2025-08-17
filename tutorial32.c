#include <stdio.h>
// int func1(int array[])
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value at %d is %d\n", i, array[i]);
//     }
// array[0] = 786; //if u change any value here it will also change in main()....
//     return 0;
// }

void func2(int* ptr)
{
  
for (int i = 0; i < 4; i++)
    {
       printf("the value at %d is %d\n", i, ptr[i]);
    }
ptr[3] = 678;

}
int main()
{
    int arr[] = {23, 13, 3, 4};
    // printf("the value at index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("the value at index 0 is %d\n",arr[0]);
printf("the value at index 3 is %d\n",arr[3]);
    func2(arr);
    printf("the value at index 3 is %d\n",arr[3]);
    return 0;
}