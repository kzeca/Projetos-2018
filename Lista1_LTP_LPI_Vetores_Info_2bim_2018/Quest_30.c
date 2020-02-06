#include<stdio.h>

#define PMAX 100

int main()
{
   int teste=0;
   int participantes, rodadas;
   int part[PMAX];
   int npart;
   int ordem;
   int acao;
   int posacao;
   int i,j,k;

   scanf("%d %d", &participantes, &rodadas);
   while(participantes || rodadas) {
      printf("Teste %d\n", ++teste);

      for(i=0;i<participantes;i++) scanf("%d",&(part[i]));

      for(i=0;i<rodadas;i++)
      {
         scanf("%d %d", &npart, &ordem);

         posacao=0;
         for(j=0;j<npart;j++)
         {
            scanf("%d",&acao);
            if(acao == ordem) posacao++;
            else for(k=posacao+1;k<npart;k++) part[k-1]=part[k];
         }
      }
      printf("%d\n\n", part[0]);
      scanf("%d %d", &participantes, &rodadas);
   }
   return 0;
}
