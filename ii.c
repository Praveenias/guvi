#include <stdio.h>

int main()
{
    int i,n[10],a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<b;i++)
    {
        sum=sum+n[i];
    }
    printf("%d",sum);
    
}
