#include<stdio.h>
int main()
{
int i,j,n,c=0,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=n;i>0;i--)
{
if(n-1==a[i-1])
{
c++;
}}
if(c+1==n)
printf("yes");
else
printf("no");
getch();
return 0;
}