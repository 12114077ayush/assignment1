#include<stdio.h>
int main()
{
printf("enter time in HH:MM format");
char T[5];
gets(T);
printf("%c%c Hour and %c%c minutes",T[0],T[1],T[3],T[4]);
return 0;
}
