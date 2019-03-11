#include<stdio.h>
void main()
{
int i,j,c=0;
char a[100],b;
clrscr();
scanf("%s %c",&a,&b);
//l=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b)
{
c++; }}
printf("%d",c);
getch();
}

