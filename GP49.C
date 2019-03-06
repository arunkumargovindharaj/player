#include<stdio.h>
void main()
{
int n;
clrscr();
scanf("%d",&n);
if(n>=-32768&&n<=32767)
{
printf("yes");
}
else
printf("long");

getch();
}