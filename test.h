#include<stdio.h>
bool flag = false;
bool add(int a, int b) 
{
    int s=a+b;
    if(s)
    flag =true;
    return flag;
}

bool sub(int a, int b) 
{
    int m=a-b;
    if(m<0)
    m=-m;
    if(m)
    flag =true;
    return flag;
}

bool mul(int a, int b) 
{
    int p=a*b;
    if(p)
   flag =true;
    return flag;
}   
bool division()
{
    
}
bool rem()
{
    
}

