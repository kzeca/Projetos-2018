#include <stdio.h>
#include <stdlib.h>

float temperatura(void)
{
    float F,C;

    printf("Informe os Fahrenheit: ");
    scanf("%f", &F);
    C=((F-32)*5)/9;
    return C;
}

main()
{
    float r;
    r=temperatura();
    printf("\n\nReferente em graus Celsius: %.1f\n\n", r);
    getch();
}
