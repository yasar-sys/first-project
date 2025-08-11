// #include <stdio.h>

// int main() {
//     int T, M;
//     scanf("%d %d", &T, &M);

//     int i;
//     for (i = 1; i <= T; i++) {
//         if (M >= i) {
//             M -= i;
//         } else {
//             printf("%d\n", T - i + 1);
//             return 0;
//         }
//     }

//     printf("0\n");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int N, final;

//     scanf("%d", &N);
//     final = 4*N;

//     printf("%d * 4 = %d", N, final);

//     return 0;
// }

 #include<stdio.h>
 int main()
 {
     int a,b ;
     scanf("%d",&a);
     scanf("%d",&b);

     for (int i = a; i <= b; i++)
     {
        if (i == 1) printf("one\n");
         else if (i == 2)
          printf("two\n");
         else if (i == 3)
          printf("three\n");
         else if (i == 4)
          printf("four\n");
         else if (i == 5)
          printf("five\n");
         else if (i == 6)
          printf("six\n");
         else if (i == 7)
          printf("seven\n");
         else if (i == 8)
          printf("eight\n");
         else if (i == 9)
          printf("nine\n");
         else if  (i % 2 == 0)
         printf("even\n");
         else
         {
         printf("odd\n");
         }

     }

     return 0;
 }

// #include<stdio.h>
// int main()
// {
//     int X;
//     scanf("%d",&X);

// if (X == 404)
// {
//     printf("NOT FOUND");
// }
// else
// {
//     printf("FOUND");
// }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int X;
//     scanf("%d", &X);
//     int final = X * 2;
//     printf("%d", final);
//     return 0;
// }

// #include <stdio.h>

// int main() 
// {
//     int n, sum = 0;
    
//     scanf("%d", &n);

//     for (int i = 0; i < 5; i++) {
//         sum += n % 10; 
//         n = n / 10; 
//     }

//     printf("%d\n", sum);
//     return 0;
// }
