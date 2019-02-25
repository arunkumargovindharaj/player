#include<stdio.h>
void main()
{
char str1[100],str2[200];
int i,j=0,l=0;
clrscr();
scanf("%s",&str1);
for(i=0;str1[i]!='\0';i++)
{
l++;
}
for(i=l-1;i>=0;i--)
{
str2[j]=str1[i];
j++;
}
for(i=0;i<l;i++)
{
if(str2[i]=='a'||str2[i]=='e'||  str2[i]=='i'||  str2[i]=='o'|| str2[i]=='u'||
str2[i]=='A'|| str2[i]=='E'||  str2[i]=='I'||str2[i]=='O'||str2[i]=='U')
{
continue;
}
else
{
printf("%c",str2[i]);  }
}
getch();
}
