#include<stdio.h>
void main()
{
int a,b;
clrscr();
scanf("%d",&a);
while(a)
{
b=a%10;
a=a/10;
printf("%d",b);
 }
getch();
}