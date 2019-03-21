#include<stdio.h>
int main()
{
int i,j,n,a[100],sum=0,l=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
l++;
}
for(i=0;i<n;i++)
{
if(a[i]<a[i+1])
{
for(i=0;i<l;i++)
{
printf("%d\t",i+1);
}}
else if(a[i]>a[i+1])
{
for(i=l;i>0;i--)
{
printf("%d\t",i); } break;
}  }
return 0;
}
