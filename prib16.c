#include <stdio.h>
int main()
{
    int l, h, i, flag;
       scanf("%d %d", &l, &h);
       l=l+1;
       while (l< h)
    {
        flag = 0;
        for(i = 2; i <= l/2; ++i)
        {
            if(l % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", l);
        ++l;
    }
    return 0;
}
