#include<stdio.h>
float add(int a, int b) 
{
     float sum=a+b;
    return sum;
}

int sub(int a, int b) 
{
     float diff=a-b;
    return diff;
}

float mul(int a, int b) 
{
    float pro=a*b;
    return pro;
}   
void division()
{
    
}
double rem()
{
    
}
int main()
{ 
 float a,b,c;
 a=add(5,4);
 b=sub(5,4);
 c=mul(5,4);
 printf("%f %f %f",a,b,c);
}

