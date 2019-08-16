#include <stdio.h>

int main()
{
    int a,b=0;
    scanf("%d",&a);
    if(a>60)
    {
        b=a/60;
        a=a-(b*60);
        printf("%d %d",b,a);
    }
    else
    {
        printf("%d %d",b,a);
    }

    return 0;
}
