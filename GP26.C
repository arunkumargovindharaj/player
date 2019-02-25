#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,c=0;
clrscr();
scanf("%s",&str[i]);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='  ')
{
str[i]='$';
break;
}
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
str[i]='+';
}
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='$')
{
str[i]=' ';
}
if(str[i]!='+')
{
printf("%c",str[i]);
} }
getch();
}
