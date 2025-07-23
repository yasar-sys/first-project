// // #include <stdio.h>

// // int main()
// //  {
// //   int t;
// //     scanf("%d", &t);
// //     while (t--) {
// //         int A, B, C;
// //         scanf("%d %d %d", &A, &B, &C);

// //         if (A <= B && C <= B) {
// //             int temp;
// //             if (A >= C)
// //                 temp = A;
// // //             else
// // //                 temp = C;

// // //             if (temp <= B)
// // //                 printf("Yes\n");
// // //             else
// // //                 printf("No\n");
// // //         } else {
// // //             printf("No\n");
// // //         }
// // //     }

// // //     return 0;
// // // }

// // #include <stdio.h>
// // #include <math.h>

// // int main() {
// //     int N,s;
// //     printf("enter the value:\n");

// //     scanf("%d", &N);

//      s = pow(2, N-1);

//     printf("%d\n", s);

//     return 0;
// }

// #include <stdio.h>

// int getclearDays(int rainy,int cloudy)
// {

//  return 7-rainy-cloudy;

// }

    

// int main() 
// {
//     int X, Y,clearDays;
//     scanf("%d %d", &X, &Y);

//      clearDays = getclearDays(X,Y);
//     printf("%d\n", clearDays);

//     return 0;

// }

// #include <stdio.h>

// int factorial(int n) 
// // {
// //     if (n == 0 || n == 1)
// //         return 1;
// //     return n*factorial(n-1);
// // }

// // int main()
// //  {
// //     int N;
// //     scanf("%d", &N);

// //     printf("%d\n", factorial(N));
// //     return 0;
// // }
// #include <stdio.h>

// int main() {
//     int T;
//     //printf("Enter number of test cases: ");
//     scanf("%d", &T);

//     for (int i = 0; i < T; i++) {
//         int A, B, C, D;

//        // printf("Enter current score (A B): ");
//         scanf("%d %d", &A, &B); 

//       //  printf("Enter desired score (C D): ");
//         scanf("%d %d", &C, &D); 

//         if (C >= A && D >= B) {
//             printf("POSSIBLE\n");
//         } else {
//             printf("IMPOSSIBLE \n");
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
 {
    int T, X,
     percent_discount,
     max_discount;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)

     {
        //bills

        scanf("%d", &X); 
       

      percent_discount = (X * 10) / 100;
        

        if (percent_discount > 100)
        
        {
            max_discount = percent_discount;
        } 
        else 
        {
            max_discount = 100;
        }

        printf("%d\n", max_discount);
    }

    return 0;
}