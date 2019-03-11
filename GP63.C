#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j,m,a[100],b[100];
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<k;j++)
{
if(a[i]==b[j])
{
printf("%d\n",a[i]);
}}  }
getch();
}

