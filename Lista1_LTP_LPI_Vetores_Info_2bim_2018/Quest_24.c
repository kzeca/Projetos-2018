#include <stdio.h>
main()
{
   int a[30],b[30],x,i;
   for(i=1;i<30;i++)
   {
      scanf("%d",&a[i]);
      scanf("%d",&b[i]);
   }
   scanf("%d",&x);
   for(i=0;i<30;i++) if(x==a[i]) printf("%d\n",&b[i]);
}
