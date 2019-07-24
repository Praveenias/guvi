#include <stdio.h>

int main()
{
    int a,b[100],sum=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
        sum=sum+b[i];
    }
    printf("%d",sum/a);
    
}
