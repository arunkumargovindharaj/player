#include<stdio.h>
#include<conio.h>
int main()
{
char a[100],b[100];
int i,j,l=0,m=0;
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=0;b[i]!='\0';i++)
{
m++;
}
if(l==m)
{
for(i=0;a[i]!='\0';i++)
{
printf("%c",a[i]);
}
else if(l>m)
{
printf("%c",a[i]);
}
else
{
printf("%c",b[i]);
}*/
getch();
return 0;
}