#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char filename[13],line[200],s1[]="int",s2[]="void",
                                  s3[]="float",s4[]="double",s5[]=";",s6[]="(",s7[]=")",s9[]="return",
                                  s10[]="printf" ,s11[]="fprintf" ,s12[]="fputs",s14[]="if",s15[]="while";

char s13[]="}";
int x;
  printf("enter filename:\n");
  gets(filename);
  fp=fopen(filename,"r");
  char str[200];
  if(!fp)
{
  perror("could not find the file");
  exit(0);
}
while ( fgets ( line, 200 , fp ) != NULL ) 
{
  if((strstr(line,s1) || strstr(line,s2) || strstr(line,s3) || strstr(line,s4)) && !strstr(line,s14)
                      && !strstr(line,s15) && !strstr(line,s5) && strstr(line,s6) && strstr(line,s7))
   {
      x=1;
      strcpy(str,line);
   }
  if(strstr(line,s9) || strstr(line,s10) || strstr(line,s11) || strstr(line,s12))
    {
     x++;
    }
    if(strstr(line,s13))
{
x=x+2;
}
if(x==3)
{
fputs(str,stdout);
x=0;
}
}
  fclose ( fp );
  return 0;
}
