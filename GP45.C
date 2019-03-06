#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,p,a,c,perimeter=0,area=0;
clrscr();
scanf("%d%d",&p,&a);
for(i=1;i<=p;i++)
{
for(j=1;j<=a;j++)
{
perimeter=2*(i+j);
area=(i*j);
if(perimeter==p&&area==a)
{
c=1;
}
}}
if(c==1)
{
  printf("yes");
  }
  else
  printf("no");
  getch();
  }