#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,sum=0;
clrscr();
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
sum=n/i;
if(sum%2==1)
{
printf("%d",i);
break;
 }
 }
 }
getch();
}

