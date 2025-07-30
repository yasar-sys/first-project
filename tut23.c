// #include <stdio.h>

// int main()
// {
// int marks[4];
// marks[0]=34;
// printf("marks of student 4 is %d\n",marks[0]);
// marks[0]=384;
// printf("marks of student 4 is %d\n",marks[0]);
// return 0;

#include <stdio.h>

int main()
{

    int marks[2][4] = {{6,7,45, 67}, {4, 7, 90, 8}};

    for (int i = 0; i < 2; i++)

    {
        for (int j = 0; j < 4; j++)
        {
            /* code */

            // printf(" [%d,%d] = %d\n", i,j,marks[i][j]);
            printf("%d ",marks[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}
