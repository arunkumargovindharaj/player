#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
printf("%d",a);
}
 if(b>c)
{
printf("%d",b);
}
if(c>a)
{
printf("%d",c);
}
getch();
}