#include <stdio.h>
int main()
{
    int a,re=0,r,c;
    scanf("%d",&a);
    c=a;
    while(c!=0)
    {
        r=c%10;
        re+=r*r*r;
        c=c/10;
    }
    if(re==a)
        printf("yes");
    else
        printf("no");
    
}
