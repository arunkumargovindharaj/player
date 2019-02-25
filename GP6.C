#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,l1=0,l2=0,u,v,y,m=0;
char str1[100],str2[100];
clrscr();
scanf("%s%s",&str1,&str2);
for(i=0;str1[i]!='\0';i++)
{
l1++;
}
for(i=0;str2[i]!='\0';i++)
{
l2++;
}
//for(i=0;i<l;i++)
//{
if(l1==l2)
{
 for(i=0;j<l1;i++)

{
 for(j=i+1;j<l2;j++)
{

 u=str1[i]-str1[j];
 v=str2[i]-str2[j];

 if(u==v)
 {
 m=0;
 }
 else
 {
 m=1;
  break;
  }
//printf("equal");
} } }
else
{
printf("\nno");
}
if(m==1)
{
printf("\nno");
}
else
{
printf("\nyes");
}
getch();
}