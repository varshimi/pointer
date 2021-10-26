#include<stdio.h>
#include<conio.h>
int a=50;
int *p=&a;
void main()
{
 clrscr();
 printf("the value of p is %d\n",*p);
 printf("the address of p is %x",p);

 getch();
}
