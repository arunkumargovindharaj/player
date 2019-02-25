#include<stdio.h>
void main()
{
int i,l,c=0,d=0,y=0;
char a[100];
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
l=i;
for(i=0;i<=l;i++)
{
if(a[i]=='I')
{
c=c+1;
if(a[i+1]=='V')
{
c=4;
i++;
}
else if(a[i+1]=='X')
{
c=9;
i++;
}
//c=c+1;
//i++;
}
else
{
if(a[i]=='V')
c=c+5;
if(a[i]=='X')
d=d+10;
}
 }
y=c+d;
printf("%d",y);
getch();}