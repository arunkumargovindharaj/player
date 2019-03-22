#include<stdio.h>
//#include<conio.h>
int main()
{
int i,n,temp,bin=0,ba=1,r=0;
//clrscr();
scanf("%d",&n);
while(n)
{
r=n%10;
bin=bin+(ba*r);
ba=ba*2;
n=n/10;
}
printf("%d",bin);
//getch();
return 0;
}