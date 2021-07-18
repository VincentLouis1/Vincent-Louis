#include<stdio.h>
#include<stdbool.h>
#include "test.h"
int main()
{
int a[10],i;
typedef bool (*f)(int, int);                 
f func[5] = {&add, &sub, &mul, &division, &rem};
printf("Unused Function is at position:");
    for(i=0;i<5;i++)
    {
    a[i]=func[i](5, 4);
    if(a[i]!=1)
    {
    printf("%d",i);
    if(i==5-1)
    break;
    printf(",");
    }
    }
    return 0;
}
