#include<stdio.h>
void main()
{
int n,j,i;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i*j==n&&i%2!=0)
{
//if(i%2!=0)
//{
printf("%d\n",i);
}} }
getch();
}