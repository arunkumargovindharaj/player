#include<stdio.h>
//#include<conio.h>
int main()
{
int i,n,temp=0,a[100],c=0,j;
//clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}}
if(c!=0)
{
printf("yes");
}
else
{
printf("no");
}
//getch();
return 0;
}