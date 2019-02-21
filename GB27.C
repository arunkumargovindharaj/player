#include<stdio.h>
void main()
{
int a,i,c,d=1;
clrscr();
scanf("%d",&a);
for(i=1;i<=a;i++)
{
 d=d*i;     }
  for(i=0;i<=a;i++)
	    {
		printf("%d\t\n",i);   }
while(a)
{
   printf("%d_\t",a);
     a--;
  }
  printf("%d",d);
   getch();
   }
