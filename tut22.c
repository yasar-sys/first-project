#include <stdio.h>

int main()
{

    int option;
    float km;
    float inch;
    float cm;
    float pound;
    int choose;

label:

    printf("enter an option:\n ");
    printf("1-km to mile\n");
    printf("2-inch to foot\n");
    printf("3-cm to inch\n");
    printf("4-pound to kg\n");
    printf("5-inch to meter\n");

    scanf("%d", &option);

    switch (option)
    {
    case 1:

        printf("enter km: ");
        scanf("%f", &km);
        printf("%f km is equal to %f mile\n", km, 0.621 * km);
        break;

    case 2:

        printf("enter inch: ");
        scanf("%f", &inch);
        printf("%f inch is equal to %f foot\n", inch, 0.0833333 * inch);
        break;

    case 3:

        printf("enter cm: ");
        scanf("%f", &cm);
        printf("%f cm is equal to %f foot\n", cm, 0.393 * cm);
        break;
    case 4:

        printf("enter pound: ");
        scanf("%f", &pound);
        printf("%f pound is equal to %f kg\n", pound, 0.453592 * pound);
        break;
    case 5:

        printf("enter inch: ");
        scanf("%f", &inch);
        printf("%f inch is equal to %f meter\n", inch, 0.0254 * inch);
        break;
    default:
        printf("Invalid Option Chosen");
        break;
    }

    printf("Choose 0 to exit or any number to continue: ");
    scanf("%d", &choose);

    switch (choose)
    {
    case 0:
        printf("see u next time");
        break;

    default:
        goto label;
    }


//  if (choose == 0)
//     {
//         printf("See you next time\n");
//     }
//     else
//     {
//         goto label;
//     }







    return 0;
}
