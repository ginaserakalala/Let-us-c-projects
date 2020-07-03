/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : swapnumbers.c

* Purpose : Swap two numbers

* Creation Date : 03-07-2020

* Last Modified : Fri Jul  3 13:28:55 2020

* Created By :  Shibe Serakalala

_._._._._._._._._._._._._._._._._._._._._.*/
#include <unistd.h>
#include <stdio.h>

int main(void)
{
int a;
int b;
int temp;

printf("Enter a number: ");
scanf("%d",&a);
printf("Enter a second number: ");
scanf("%d",&b);
printf("before swapping the two numbers %d %d\n",a,b);
temp = a;
a = b;
b = temp;
printf("After swapping the two numbers %d %d\n", a,b);
return (0);
}
