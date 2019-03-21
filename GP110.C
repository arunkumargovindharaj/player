#include<stdio.h>
int main()
{
int i,j,n,a[100],b[100],sum=0,k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
sum=sum+a[i];
}
if(n==1)
{
printf("%d",sum);
}
else {
for(i=0;i<n;i++)
{
printf("%d\n",sum+a[i]); } }
return 0;
}
