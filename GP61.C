#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j=0,a[200],sum=0;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
if(sum==k)
{
printf("yes");
}
else
printf("no");
getch();
}

