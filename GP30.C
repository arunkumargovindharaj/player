#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i,j,k,c=0,n1,n2;
clrscr();
gets(a);
gets(b);
scanf("%d",&k);
n1=strlen(a);
n2=strlen(b);
if(n1==n2)
{
for(i=0;i<n1;i++)
{
if(a[i]!=b[i])
{
c++;
}
}
if(c==k)
{
printf("yes");
}
else
printf("no");}
else
printf("no");
getch();
 }