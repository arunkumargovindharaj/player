#include<stdio.h>
void main()
{
int n,a=0,b=0,c=0;
clrscr();
scanf("%d",&n);
while(n!=0)
{
a=n%10;
b=a*a;
c=c+b;
n=n/10;  }
printf("%d",c);
getch();
}
