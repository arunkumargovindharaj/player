#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j=0,a[100],b[100],m,p,max=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
m=a[j]-a[i];
p=a[i]-a[j];
 if(m>max)
 {
 max=m;
 }
 if(p>max)
 {
 max=p;
 }} }
printf("%d",max);
getch();
}



