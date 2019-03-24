#include<stdio.h>
#include<conio.h>
int main()
{
char a[100],b[100];
int i,j,l=0,k,p=0,n=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
p++;
}
for(i=0;a[i]!=' ';i++)
{
n++;
}
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
for(i=n+1;a[i]!='\0';i++)
{
if(a[i]!=' ');
  {
  b[l]=a[i];
  l++;
  }
  if(a[i]==' ')
  {
  for(j=l;j>=0;j--)
  {
  printf("%c",b[j]);
  }
  printf(" ");
  k=i;
  l=0; }}
  printf(" ");
  for(j=p-1;j>k;j--)
  {
  printf("%c",a[j]);
  }
  getch();
  return 0;
  }