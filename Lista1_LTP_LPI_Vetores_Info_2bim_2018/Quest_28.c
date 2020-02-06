#include <stdio.h>
#include <string.h>
main()
{
   char ln[10][40],pesq[40];
   int qc,i,j;
   float p[999],tp[10];
   for(i=0;i<10;i++)
   {
      printf("Informe seu nome: ");
      scanf("%s",&ln[i]);
      printf("Informe a quantidade de costuras: ");
      scanf("%d",&qc);
      for(j=0;j<qc;j++)
      {
         printf("Informe o preco da costura %d: ",j);
         scanf("%f",&p[j]);
         tp[i] += p[j];
      }
   }
   printf("Pesquisa: ");
   scanf("%s",&pesq);
   for(i=0;i<10;i++)
   {
      if(strcmp(pesq,ln[i])==0)
      {
         printf("Nome: %s\n",ln[i]);
         printf("Total a pagar: %.2f\n",tp[i]);
      }
   }
}
