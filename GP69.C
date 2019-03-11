#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j,m,a[100],b[100],temp=0,c;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-k;i++)
{
printf("%d\n",a[i]);
}
getch();
}

