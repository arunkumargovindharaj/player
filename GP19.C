#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,f=0,a;
clrscr();
scanf("%d",&a);
for(i=2;i<=a;i++)
{
f=0;
for(j=2;j<=i;j++)
{
if(i%j==0)
{
f++;
}
}
if(f==1)
{
if(a%i==0)
{
printf("%d",i);
}
}
 }
 getch();
 }