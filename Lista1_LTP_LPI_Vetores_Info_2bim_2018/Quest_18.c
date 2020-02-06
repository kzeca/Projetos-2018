#include <stdio.h>
main()
{
   int code[20],estq[20],clt,codeb;
   int qt,n,i=0;
   scanf("%d",&code[1]);
   scanf("%d",&estq[1]);
   while(code[i]!=999)
   {
      i++;
      scanf("%d",&code[i]);
      scanf("%d",&estq[i]);
   }
   n = i+1;
   scanf("%d",&clt);
   while(clt!=999)
   {
      scanf("%d %d",&codeb,&qt);
      i=0;
   }
   do
   {
      i++;
      if(code[i]==codeb)
      {
         if(estq[i]>=qt) estq[i] = estq[i]-qt;
         else printf("Estoque Insuficiente!\n");
      }
      scanf("%d",&clt);
   }while(i=n||code[i]==codeb);
}
