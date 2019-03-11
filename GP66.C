#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j,m,a[100],b[100],c=1;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{  c=1;
 for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
c=c+1;
}}
if(c==k)
{
 printf("%d",a[i]);
 }}
//printf("%d\n",a[i]); }
//}
getch();
}

