#include<stdio.h>
void main()
{
char str1[100],str2[200];
int i,j,c=0,max=0,k;
clrscr();
scanf("%s",&str1);
for(i=0;str1[i]!='\0';i++)
{
for(j=i+1;str1[j]!='\0';j++)
{
if(str1[i]==str1[j])
{
c=c+1;
} }
if(c>max)
{
k=str1[i];
max=c;
}  }
printf("%c",k);
getch();
}
