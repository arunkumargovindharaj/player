#include<stdio.h>
void main()
{
int n,j,i;
clrscr();
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
j=1;
} }
if(j==1)
printf("yes");
else
printf("no");
getch();
}