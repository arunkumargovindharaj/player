#include<stdio.h>
void main()
{
int i,l=0;
char a[100];
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=l;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
