#include<stdio.h>
void main()
{
int a,b,c,e,f,i,t;
clrscr();
scanf("%d%d",&e,&f);
for(i=e;i<=f;i++)
{
t=i;
c=0;
while(t!=0)
{
b=t%10;
c=c+b*b*b;
t=t/10;
}
if(c==i)
 printf("%d",c);
//printf("%d",c);   }}
   }
getch();
}