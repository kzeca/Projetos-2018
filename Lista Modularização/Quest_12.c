#include <stdio.h>
#include <stdlib.h>

int horas(void)
{
    int h;

    printf("Informe as horas: ");
    scanf("%d", &h);
    h=h*3600;
    return h;
}

int minutos(void)
{
    int min;

    printf("Informe os minutos: ");
    scanf("%d", &min);
    min=min*60;
    return min;
}

main()
{
    int s1,s2, s;

    s1=horas();
    s2=minutos();
    printf("Informe os segundos: ");
    scanf("%d", &s);
    s+=s1+s2;
    printf("\n\nTempo total em segundos: %d", s);
    getch();
}
