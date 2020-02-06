#include <stdio.h>
main()
{
   int v[12],aux,i,j;
   for(i=0;i<12;i++) scanf("%d",&v[i]);
   for(i=0;i<11;i++)
   {
      for(j=0;j<11;j++)
      {
         if(v[j]>v[j+1])
         {
            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
         }
      }
   }
   printf("Ordem crescente: ");
   for(i=0;i<12;i++) printf("%d ",v[i]);
   printf("Ordem decrescente: ");
   for(i=11;i>=0;i--) printf("%d ",v[i]);
}
