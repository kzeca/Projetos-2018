#include <stdio.h>
main()
{
   int col,j,ant,linh,linha;
   do
   {
      scanf("%d",&linh);
   }while(linh<0);
   ant=1;
   printf("%d\n",ant);
   if(linh)
   {
      linha = 1;
      col = 2;
      for(j=0;j<col&&linh<=linha;j++)
      {
         if(j=1) printf("1\n");
         ant *= (linha-(j+1))/2;
         printf("%d\n",ant);
         j++;
         if(j==col)
         {
            ant = 1;
            linha++;
            col = linha+1;
            j=1;
         }
      }
   }
}
