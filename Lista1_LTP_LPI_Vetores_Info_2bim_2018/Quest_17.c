#include <stdio.h>
main()
{
   char r[10],s[20],x[30],y[10],z[10];
   int i,j;
   for(i=0;i<10;i++) scanf("%c",&r[i]);
   for(i=0;i<20;i++) scanf("%c",&s[i]);
   for(i=0;i<10;i++) x[i] = r[i];
   for(j=0;j<20;j++)
   {
      i++;
      x[i] = s[j];
   }
   for(i=0;i<10;i++)
   {
      for(j=0;j<20;j++) if(r[i]==s[j]) y[i] = r[i];
   }
   puts(x);
   puts(y);
   puts(z);
}
