#include <stdio.h>
#include <math.h>
int main()
{
   int a[20],b[20],i,ai[20];
   for(i=0;i<20;i++)
   {
      scanf("%d",&a[i]);
      b[i] = pow(a[i],3);
   }
   for(i=0;i<20;i++)
   {
      if(ai[i]==b[i]) return i;
      else return -1;
   }
}
