#include<stdio.h>
#include "test.h"
int main()
{
int a[10],i;
typedef int (*f)(int, int);                 
f func[5] = {add, sub, mul, division, rem};
printf("Unused Function is at position:");
    for(i=0;i<5;i++)
    {
    a[i]=func[i](0,0);
    if(a[i])
    {
    printf("%d",i);
    if(i==4)
    break;
    printf(",");
    }
    }
    return 0;
}
