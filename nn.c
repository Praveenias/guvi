#include <stdio.h>

int main()
{
    int a,i,b;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
    }
   
        
}
