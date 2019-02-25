#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a'&&a[i]<='z')
{
b[i]=a[i]-32;
printf("%c",a[i]-32);
}
else if(a[i]>='A'&&a[i]<='Z')
{
//for(i=0;a[i]!='\0';i++)
printf("%c",a[i]+32);
}
}
getch();
}