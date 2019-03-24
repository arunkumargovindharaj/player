#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100],b[100],k[100];
int i,j=0,l=0,t;
clrscr();
gets(a);
scanf("%s",b);
l=strlen(b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[j])
{
a[i]='*';
}
j++;
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' '&&a[i]!='*')
{
printf("%c",a[i]);
} }
getch();
return 0;
}