
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printRandoms(int lower, int upper, int count)
{
    int i,a[100],cou=0,odd = 0,minv=200, lar=0,pos =0;
    for (i = 0; i < count; i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        
        if (minv >= num)
            minv=num;
        if (num%3==0)
            cou++;
        if (num%2!=0)
            odd++;
        if (lar < num)
        {
            lar = num;
            pos = i;
        }
        printf("%d ", num);
        
    }
    printf("\n Divisible by 3:");
    printf("%d",cou);
    printf("\n Odd count:");
    printf("%d",odd);
    printf("\n minimun count: %d",minv);
    printf("\n largest value index: %d",pos);
}
  

int main()
{
    int lower = 1, upper = 100, count = 100;
  
    
    srand(time(0));
  
    printRandoms(lower, upper, count);
  
    return 0;
}
