#include<stdio.h>
#include<conio.h>
int nain()
{
int r=0,n,b=1,h=0,bin=0;
scanf("%d",&n);
while(n)
{
r=n%2;
bin=bin+(b*r);
b=b*10;
n=n/10;
h++;  }
ptintf("%d",h);}
return 0;

