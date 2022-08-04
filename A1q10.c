#include<stdio.h>
int main()
{
char c[]="27/11/2022";
printf("Day-");
for(int i=0;i<2;i++)
printf("%c",c[i]);
printf(",month-");
for(int i=3;i<5;i++)
printf("%c",c[i]);
printf(",year-");
for(int i=6;i<10;i++)
printf("%c",c[i]);
return 0;
}
