#include <stdio.h>
main()
{
   int a[12],b[12],c[12],aux,i,j;
   for(i=0;i<12;i++) scanf("%d",&a[i]);
   for(i=0;i<11;i++){
      for(j=0;j<11;j++)
      {
         if(a[j]>a[j+1])
         {
            aux = a[j];
            a[j] = a[j+1];
            a[j+1] = aux;
         }
      }
   }
   for(i=0;i<12;i++) scanf("%d",&b[i]);
   for(i=0;i<11;i++){
      for(j=0;j<11;j++)
      {
         if(b[j]>b[j+1])
         {
            aux = b[j];
            b[j] = b[j+1];
            b[j+1] = aux;
         }
      }
   }
   for(i=0;i<12;i++) c[i] = a[i]+b[i];
   for(i=0;i<11;i++){
      for(j=0;j<11;j++)
      {
         if(c[j]>c[j+1])
         {
            aux = c[j];
            c[j] = c[j+1];
            c[j+1] = aux;
         }
      }
   }
   for(i=0;i<12;i++) printf("%d ",c[i]);
}
