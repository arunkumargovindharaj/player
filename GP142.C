#include<stdio.h>
int main()
{
char a[100][100],b[100],c[100];
int i,j,n,k,l=0,h=0,e=0,f=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<n;i++)
{
strcpy(b,a[i]);
strcpy(c,a[i+1]);
e=strlen(b);
f=strlen(c);
if(e==f)
{
l=0;
for(j=0;j<f;j++)
{
if(b[j]==c[j])
{
l++;
}
}}
if(e==l)
{
h++;
}}
//h++;
if(h+1==k)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}