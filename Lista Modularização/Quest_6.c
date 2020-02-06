#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void VOLUME(float a)
{
    float pi=3.14, V;

    V=pi*pow(a,3);
    printf("\n\nVolume da Circunferencia: %.2f", V);
}

main()
{
    float R;

    printf("Informe o Raio da esfera: ");
    scanf("%f", &R);
    VOLUME(R);
}
