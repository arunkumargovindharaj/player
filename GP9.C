#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,count,k=0;
clrscr();
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
count=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
count=1;
}
}
if(count==0)
{
k++; }}
printf("%d",k);
getch();
}
