#include<stdio.h>
void main()
{
int i,j,n,a[100],temp=0;
clrscr();
scanf("%d",&n);
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
printf("%d",a[1]);
//}
getch();
}

