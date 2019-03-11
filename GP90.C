#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,res=1,i,d=1,m=0;
clrscr();
scanf("%d%d",&n,&k);
if(n>=k)
{
for(i=1;i<=k;i++)
{
res=res*n;
d=d*i;
n--;
}
m=res/d;
printf("%d",res); }
getch();
}



