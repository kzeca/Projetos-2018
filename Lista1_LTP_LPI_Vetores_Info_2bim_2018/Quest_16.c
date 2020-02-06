#include <stdio.h>
main()
{
   int v1[15],v2[15],in[30],i,i1=0,i2=0;
   for(i=0;i<15;i++)
   {
      printf("Informe V1: ");
      scanf("%d",&v1[i]);
      printf("Informe V2: ");
      scanf("%d",&v2[i]);
   }
   for(i=0;i<30;i++)
   {
      if(i%2==0){
         in[i] = v1[i1];
         i1++;
      }
      else
      {
         in[i] = v2[i2];
         i2++;
      }
   }
   for(i=0;i<30;i++) printf("%d\n",in[i]);
}
