#include<stdio.h>
#include<conio.h>
void main()
{
int n,k=0,i,j,m,a[100],sum=0,c=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
sum=sum+a[i];
}}}
printf("%d",sum);
getch();
}

