#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int i,j,l=0,l1=0;
scanf("%s",a);
scanf("%s",b);
l=strlen(a);
l1=strlen(b);
if(l==l1)
printf("%s%s",a,b);
else if(l>l1)
{
for(i=0;i<l-1;i++)
{
printf("%c",a[i]);
}
printf("%s",b);
 }
else
{
printf("%s",&a);
for(i=0;i<l1-1;i++)
{
printf("%c",b[i]);
}}
getch();
return 0;
}





