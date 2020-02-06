#include <stdio.h>
#include <stdlib.h>

void Transforma(float a)
{
    int H, min, s;
    int aux1, aux2;

    H=a*3600;
    aux1=H;
    min=(H-aux1)*60;
    aux2=min;
    s=(min-aux2)*60;
    printf("%dh %dmin %dseg", H, min, s);
}

main()
{
    int seg;

    printf("Informe os segundos: ");
    scanf("%d", &seg);
    Transforma(seg);
}
