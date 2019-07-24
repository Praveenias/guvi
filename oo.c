#include <stdio.h>

int main()
{
   int a,b[20],i,small;
   scanf("%d",&a);
   for(i=0;i<a;i++)
   {
       scanf("%d",&b[i]);
       small=b[0];
   }
   for(i=0;i<a;i++)
   {
       if(b[i]>small)
       {
           small=b[i];
       }
   }
   printf("%d",small);
   
}
