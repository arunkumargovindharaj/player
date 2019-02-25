#include<stdio.h>
#include<conio.h>
void main()
{
int i,t=0,l=0;
char str[100];
clrscr();
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=' ')
{
if(str[i]<97)
{
str[i]=str[i]+32;
 }}}
 else
 {
 i++;
 }
printf("%s",str);
getch();
}
