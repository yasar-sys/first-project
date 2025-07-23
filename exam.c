// #include <stdio.h>

// int main()
//  {
//   int t;
//     scanf("%d", &t);
//     while (t--) {
//         int A, B, C;
//         scanf("%d %d %d", &A, &B, &C);

//         if (A <= B && C <= B) {
//             int temp;
//             if (A >= C)
//                 temp = A;
//             else
//                 temp = C;

//             if (temp <= B)
//                 printf("Yes\n");
//             else
//                 printf("No\n");
//         } else {
//             printf("No\n");
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main() {
    int N,s;
    printf("enter the value:\n");

    scanf("%d", &N);

     s = pow(2, N-1);

    printf("%d\n", s);

    return 0;
}
