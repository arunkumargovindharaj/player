#include<stdio.h>
int main()
{
int i,j,n,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(n=1)
{
printf("%d",a[0]);
}
for(i=0;i<n;i++)
{
if(a[i]%a[i-1]==0)
{
printf("%d\t",a[i]);
} }
return 0;
}