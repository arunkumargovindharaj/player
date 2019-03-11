#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j=0,a[100],b[100],m,p,min=99;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
m=a[i]-a[j];
}
else
{
m=a[j]-a[i];
}
 if(m<min)
 {
 min=m;
 }} }
printf("%d",min);
getch();
}



