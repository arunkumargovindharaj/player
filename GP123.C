#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,flag=0;
clrscr();
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
for(j=2;j<i;j++)
{
if(i%j==0)
{
flag=0;
break;
}}
if(flag==1)
{
printf("%d\n",i);
} } }
getch();
return 0;
}
