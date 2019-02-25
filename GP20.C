#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,n;
clrscr();
scanf("%s",&str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]=='X')
{
str[i]='A';
}
else if(str[i]=='Y')
{
str[i]='B';
}
else if(str[i]=='Z')
{
str[i]='C';
}
else
{
str[i]=str[i]+3;
} }
printf("%s",str);
getch();
}