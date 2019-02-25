#include<stdio.h>
void main()
{
int n1,n2,k,i,j,a[100];
clrscr();
scanf("%d%d",&n1,&n2);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n2;i++)
{
k=a[n1-1];
for(j=n1-1;j>0;j--)
{
a[j]=a[j-1];
}
a[0]=k;
}
for(i=0;i<n1;i++)
{
printf("%d",a[i]);
}
getch();
}
