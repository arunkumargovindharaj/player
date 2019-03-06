#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b[200];
int i,j,n=0,m=0,c=0,d=0,k;
clrscr();
scanf("%s",&a);
scanf("%s",&b);
for(i=0;a[i]!='\0';i++)
{
m++;
}
for(i=0;b[i]!='\0';i++)
{
n++;
}
//for(i=m-n;a[i]>0;i++)
i=m-n;
j=0;
while(i<m&&j<n)
{

if(a[i]==b[j])
{

c++;
}  j++; i++;
}
if(c==n)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
