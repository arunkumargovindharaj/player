#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,j,l=0,k,m,d;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
 for(i=0;i<l;i++)
 {
 m=0;
 for(j=0;j<l;j++)
{
if(a[i]==a[j])
{
m++;
}}
if(m==1)
{
 printf("%c",a[i]); }}
 getch();
 }