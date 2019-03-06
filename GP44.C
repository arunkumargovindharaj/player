#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int i,j,n=0,m=0,k;
clrscr();
scanf("%s",&a);
scanf("%d",&k);
for(i=0;a[i]!='\0';i++)
{
n++;
}
for(i=n-k;i<n;i++)
{
printf("%c",a[i]);

}
for(i=0;i<n-k;i++)
{
printf("%c",a[i]);
}


getch();
}
