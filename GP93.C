#include<stdio.h>
//#include<conio.h>
int main()
{
int i,n,temp=0,a[100];
//clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i=i+2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
for(i=0;i<n;i++)
printf("%d",a[i]);
//printf("%d",bin);
//getch();
return 0;
}