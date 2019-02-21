#include<stdio.h>
void main()
{
int n,k,c=1;
clrscr();
scanf("%d%d",&n,&k);
while(k)
{
 c=c*n;
// }  its wrong
 k--;   }
 printf("%d",c);
 getch();
 }



