#include<stdio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
//if((a%4==0)&&(a%100!=0)||(a%400==0))
while(a)
{
printf("hello\n");
a--;
}
getch();
}