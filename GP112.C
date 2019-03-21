#include<stdio.h>
int main()
{
int i,j,n,a[100],b[100],sum=0,k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
return 0;
}
