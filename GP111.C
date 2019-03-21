#include<stdio.h>
int main()
{
int i,j,n,a[100],b[100],c[100],sum=0,k=0,m;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
printf("%d\n",a[i]); }}}
return 0;
}
