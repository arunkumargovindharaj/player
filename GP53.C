#include<stdio.h>
void main()
{
char str1[100],b;
int i,c=0;
clrscr();
scanf("%s %c",str1,&b);
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]==b)
{
printf("%d",i+1); break;
} }
getch();
}

