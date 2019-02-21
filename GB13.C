#include<stdio.h>
void main()
{
//int i;
char ch;
clrscr();
scanf("%c",&ch);
if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
{
printf("vowels");
}
else
if((ch>='a')&&(ch<='z'))
{
printf("constant");
}
if((ch>='0')&&(ch<='9'))
{
printf("numbers");
}
getch();}