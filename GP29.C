#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,c=0,d=0,j;
clrscr();
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
c=i*i;
if(c<=b)
{
d++;
}
 }
 printf("%d",d);

getch();
}