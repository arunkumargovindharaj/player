#include<stdio.h>
void main()
{
int i,j;
char a[100],b;
clrscr();
scanf("%s %c",&a,&b);
//l=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b)
{
printf("%d",i+1);
}}
getch();
}

