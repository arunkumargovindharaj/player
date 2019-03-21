#include<string.h>
int main()
{
char str[100],str1[100],c[100];
int i,j,n,k=0,a,d=0,b,l=0,num=0,len;
//clrscr();
gets(str);
scanf("%s",&str1[i]);
len=strlen(str1);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=' ')
{
c[k]=str[i];
k++;
}
if(str[i]==' ')
{
d++;
for(j=0;j<k;j++)
{
if(c[j]==str1[l])
{
num++;
l++;  }
}
for(j=0;j<k;j++)
{
c[j]='\0';
num=0;
l=0;
} } }
num=0;
l=0;
for(j=0;j<k;j++)
{
if(c[j]==str1[l])
{
num++;
l++;
}}
if(len==num)
{
d++;
}
printf("%d",d);

return 0;
}
