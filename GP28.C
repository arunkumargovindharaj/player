#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i,k;
clrscr();
//scanf("%[^\n]",a);
gets(a);
for(i=0;a[i]!='\0';i++)
{
 if(a[i]==' ')
 {
 continue;
 }
/* printf("%c",a[i]);
 }
 if(a[i]>'  ')
 { */
 printf("%c",a[i]);

}
/*a[i]='$';
 }
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='$')
{
printf("%c",a[i]);
}} */

getch();
}