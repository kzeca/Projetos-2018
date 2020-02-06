#include <stdio.h>
main()
{
   int a[20],b[20],aux,i,j,I,f,pesq,m;
   for(i=0;i<20;i++) scanf("%d",&a[i]);
   for(i=0;i<20;i++) b[i] = a[i]+2;
   for(i=0;i<19;i++)
   {
      for(j=0;j<19;j++)
      {
         if(b[j]>b[j+1])
         {
            aux = b[j];
            b[j] = b[j+1];
            b[j+1] = aux;
         }
      }
   }
   scanf("%d",&pesq);
   I=1;
   f=19;
   for(i=0;i<19;i++)
   {
      m=(i+f)/2;
      if(b[m]==pesq) printf("%d %d",b[m],m);
      else if(b[m]>pesq) I = m+1;
      else f = m-1;
   }
}
