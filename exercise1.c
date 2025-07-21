#include<stdio.h>

int main()
{
int num;

printf("enter the number you want multiplication table of:\n");

scanf("%d", &num);




//  for (int i = 1; i < 11; i++)
//  {
//     printf("%dx%d =%d\n",num,i,num*i);
//  }


//  int i=1;

//  while (i<11)
//  {
//    printf("%d x %d = %d\n",num,i,num*i);
//    i++;

//  }
 

int i=1;
do
{
   printf("%d x %d = %d\n",num,i,num*i);
   i++;
}

while (i<11);





}