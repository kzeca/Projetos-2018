#include <stdio.h>
main()
{
   char v[30],aux;
   int i;
   for(i=0;i<30;i++)
   {
      scanf("%c",&v[i]);
      if(v[i]<v[i-1])
      {
         aux = v[i];
         v[i] = v[i-1];
         v[i-1] = aux;
      }
   }
   for(i=0;i<30;i++)
   {
      if(i%2==0) printf("%c",v[i]);
   }
}
