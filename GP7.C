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
if(i%2==0)
{
t=str[i];
str[i]=str[i+1];
str[i+1]=t;
printf("%c%c",str[i],str[i+1]);
}
}
getch();
}
