#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[100],c=0;
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
if(a[i]==a[j])
{
c=c+1;
}
}
if(c==1)
{
printf("%d",a[i]);
  }
}
//printf("%d",a[i]);

getch();
}
