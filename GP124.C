#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,a[100],c=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=2;;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(i%a[j]==0)
{
c++;
}
}
if(c==n)
{
printf("%d",i);
break;
}}
getch();
return 0;
}

