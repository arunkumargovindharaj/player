#include<stdio.h>
void main()
{
int i,j,c=0,l,m;
char a[100],b[100];
clrscr();
scanf("%s%s",&a,&b);
l=strlen(a);
m=strlen(b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[i])
{
c++;
}}
if(c!=0)
{
printf("yes");
}
else
printf("no");
getch();
}

