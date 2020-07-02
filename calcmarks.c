/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : calcmarks.c

* Purpose : Calculate a student's marks and print the percentage of the marks along with the aggregate

* Creation Date : 02-07-2020

* Last Modified : Thu Jul  2 12:11:16 2020

* Created By :  Shibe Serakalala

_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main(void)
{

int maxMarks;
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
int percentage;
int aggregateMark;
int sum;

maxMarks = 500;
printf("Enter a mark out of 100 for subject one :");
scanf("%d",&sub1);
printf("Enter a mark out of 100 for subject two :");
scanf("%d",&sub2);
printf("Enter a mark out of 100 for subject three :");
scanf("%d",&sub3);
printf("Enter a mark out of 100 for subject four :");
scanf("%d",&sub4);
printf("Enter a mark out of 100 for subject five :");
scanf("%d",&sub5);

sum = sub1 + sub2 + sub3 + sub4 + sub5;
aggregateMark = sum / 5;
percentage = sum * 100 / 500;
printf("Your aggregrate mark is %d and your percentage is  %d percent  :\n",aggregateMark,percentage);
return(0);
}
