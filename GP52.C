#include<stdio.h>
void main()
{
int i,j,n,a[100],temp=0,k;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}}
//for(i=n-1;i>=0;i--)
//{
printf("%d",a[k-1]);
//}
getch();
}

