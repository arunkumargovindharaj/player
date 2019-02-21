#include<stdio.h>
void main()
{
int a[10],k,n,i,c=0;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
printf("%d",a[i]);
}
scanf("%d",&k);
for(i=1;i<=k;i++)
{
c+=i;
}
printf("%d",c);

getch();
}