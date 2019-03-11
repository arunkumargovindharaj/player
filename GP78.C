#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j=0,a[100],b[100],temp=0;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n+k;i++)
{
a[i]=b[j];
j++;
}
for(i=0;i<n+k;i++)
{
for(j=i+1;j<n+k;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
for(i=0;i<n+k;i++)
{
printf("%d",a[i]);
}
getch();
}



