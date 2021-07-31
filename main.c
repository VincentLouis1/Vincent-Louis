#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char filename[]="test.c",line[200],s1[]="int",s2[]="void",
  s3[]="float",s4[]="double",s5[]=";",s6[]="(",s7[]=")" ,s9[]="return" ,s10[]="printf" ,s11[]="fprintf" ,s12[]="fputs";
char s13[]="}",s14[] =" ";
  int x=0,y=0;
  fp=fopen(filename,"r");
  char str[200];
  if(!fp)
{
  perror("could not find the file");
  exit(0);
}
while ( fgets ( line, 200 , fp ) != NULL ) 
{ 
  if((strstr(line,s1) || strstr(line,s2) || strstr(line,s3) || strstr(line,s4)) && !strstr(line,s5) && strstr(line,s6) && strstr(line,s7))
   {
      x=1;
      strcpy(str,line);
   }
  if(strstr(line,s9) || strstr(line,s10) || strstr(line,s11) || strstr(line,s12))
    {
     y++;
    }
    if(strstr(line,s13))
   { 
    x++;
   }
   if(line[0] == '\n')
   {
       y++;
   }
if(x==2&&y==0)
{
fputs(str,stdout);
x=0;
y=0;
}
if(strstr(line,s13))
   { 
    y=0;
   }
}
  fclose ( fp );
  return 0;
}
