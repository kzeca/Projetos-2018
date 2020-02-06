#include <stdio.h>
main()
{
   int ma1=0,ma2=0,ma3=0,s[999],id[999],j,w,n,i;
   char nome[999][40];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&s[i]);
      if(s[i]>ma1) ma1=s[i];
   }
   for(j=1;j<n;j++)
   {
      scanf("%d",&id[j]);
      if(id[j]>ma2) ma2=id[j];
   }
   for(w=0;w<n-1;w++)
   {
      scanf("%s",&nome[w]);
      if(nome[w]<nome[w+1]) ma3 = nome[w];
   }
   puts(ma1);
   puts(ma2);
   puts(ma3);
}
