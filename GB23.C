#include<stdio.h>
void main()
{
int a,b,j,i,c;
clrscr();
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{  c=0;
for(j=2;j<i;j++) {
if(i%j==0)
{
c=1;
} }
if(c==0)
{
printf("%d",i);
} }
getch();
}