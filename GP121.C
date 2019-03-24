#include<stdio.h>
#include<string.h>
int main()
{
char a[100][100],b[1000],c[1000];
int i,j,n,l=0,m=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
strcpy(b,a[0]);
for(i=1;i<n;i++)
{
strcpy(c,a[i]);
if(c[0]<b[0])
{
strcpy(b,c);
}
else if(c[0]==b[0])
{
m=strlen(b);
l=strlen(c);
if(l<m)
{
strcpy(b,c);
}
}
else
{
}  }
puts(b);
return 0;
}
