#include<stdio.h>
//#include<conio.h>
int main()
{
int i,n,temp=0,p,k,x=0;
char str[100];
//clrscr();
scanf("%s%d%d",str,&p,&k);
for(i=0;str[i]!='\0';i++)
{
if(i==p-1)
{
x=p-1;
printf("%c",str[x+k]); }}
//printf("%d",bin);
getch();
return 0;
}