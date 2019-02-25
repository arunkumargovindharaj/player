#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[10],i,j,n1,n2,max=0,k;
clrscr();
scanf("%d%d",&n1,&n2);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n2;j++)
{
scanf("%d",&b[i]);
a[i]=b[i];
i++;
max=0;
for(k=0;k<i;k++)
{
if(a[k]>max)
{
max=a[k];
}
} }
printf("%d",max);

getch();
}