#include<stdio.h>
void main()
{
int a,b,d,c=0;
clrscr();
scanf("%d",&a);
b=a;
while(b)
{
d=b%10;
c=c*10+d;
b=b/10;
}
if(a==c)
printf("palindrome");
else
printf("not");
getch();
}


