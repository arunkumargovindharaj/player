#include<stdio.h>
void main()
{
int i,a,fact=1;
clrscr();
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact=fact*i;  }
printf("%d",fact);

getch();
}
