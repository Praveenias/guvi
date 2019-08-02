#include <stdio.h>

int main()
{
    int a,i,d;
    scanf("%d %d",&a,&i);
    for(d=a+1;d<i;d++)
    {
        if(d%2==0)
           printf("%d ",d);
    }
}
