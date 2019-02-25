#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,j,d=0,c=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='(')
{
c++;
}
if(a[i]==')')
{
d++;
} }
if(c==d)
{
printf("yes");
}
else
printf("no");
getch();
 }