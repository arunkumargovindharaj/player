#include<stdio.h>
void main()
{
int i,j=0,k=0,n=0,l;
char a[100],b[100],c[100];
clrscr();
scanf("%[^\n]",&a);
scanf("%s",b);
l=strlen(b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
c[k]=a[i];
k++;
}
if(c[k]==b[k])
{
n++;
}
if(a[i]==' ')
{
for(i=0;i<k;i++)
{
c[k]='\0';
}
k=0;
}
if(n==l)
{
j++;
}}
printf("%d",j);
getch();
}

