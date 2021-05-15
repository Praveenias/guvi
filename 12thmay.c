#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printRandoms(int lower, int upper, int count)
{
    int i,a[100],cou=0,odd = 0,minv=200, lar=0,pos =0,b[100];
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
        a[i] = num;
        
        
    }
    i=0;
    int e=0;
    while(i<100)
    {
        printf("%d\t",a[i]);
        if(a[i]%2==0)
        {
            b[e]=a[i];
            e++;
        }
        if((i+1)%10 == 0)
            printf("\n");
        i++;
    }
    printf("Number divisible by two is:\n");
    int lenght = sizeof(b)/sizeof(b[0]);
    for(i=0;i<e;i++)
    {
        printf("%d\t",b[i]);
        if((i+1)%10 ==0)
            printf("\n");
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

OUTPUT:

46      18      4       6       7       27      60      36      25      95
86      36      53      59      6       65      39      87      97      67
44      45      50      59      68      74      83      51      11      31
47      56      100     50      13      59      76      25      94      52
19      79      40      24      38      97      40      28      83      36
46      27      80      95      37      99      20      20      2       82
2       48      38      54      49      2       12      24      26      5
28      97      35      67      72      24      63      11      3       97
98      48      75      29      95      12      27      14      83      28
48      36      27      85      89      75      38      100     51      16
Number divisible by two is:
46      18      4       6       60      36      86      36      6       44
50      68      74      56      100     50      76      94      52      40
24      38      40      28      36      46      80      20      20      2
82      2       48      38      54      2       12      24      26      28
72      24      98      48      12      14      28      48      36      38
100     16
 Divisible by 3:32
 Odd count:48
 minimun count: 2
 largest value index: 32
