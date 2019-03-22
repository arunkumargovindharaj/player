#include<stdio.h>
//#include<conio.h>
int main()
{
int i,n,temp,bin=0,ba=1,r=0;
//clrscr();
scanf("%d",&n);
while(n)
{
r=n%2;
bin=bin+(ba*r);
ba=ba*10;
n=n/2;
}
printf("%d",bin);
//getch();
return 0;
}