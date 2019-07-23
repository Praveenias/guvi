#include <stdio.h>

int main()
{
    int i,a,b,rem=0,rev=0;
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(b==rev)
        printf("yes");
    else
        printf("no");
        
}
