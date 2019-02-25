#include<stdio.h>
#include<conio.h>
void main()
{
char str1[100],str2[100];
int i,k=0,g=0,l=0;
clrscr();
scanf("%s%s",&str1,&str2);
for(i=0;str1[i]!='\0';i++)
{
l++;
}
for(i=0;i<l;i++)
{
//if(str1[i]==str2[i])
//{
//k++;
//}
if(str1[i]!=str2[i])
{
g++;
}
}
if(g=1)
{
printf("yes");
}
if(g>1)
printf("no");
getch();
}
