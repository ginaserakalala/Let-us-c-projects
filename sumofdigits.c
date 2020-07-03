/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

 * File Name : sumofdigits.c

 * Purpose : Sum of digits

 * Creation Date : 03-07-2020

 * Last Modified : Fri Jul  3 14:59:44 2020

 * Created By :  Shibe Serakalala

 _._._._._._._._._._._._._._._._._._._._._.*/
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int number;
	int sum;
	int remainder;

	sum = 0;

	printf("Enter a 5 digit number:");
        scanf("%d",&number);
	while(number > 0)
	{
		remainder = number % 10;
		sum = sum + remainder;
                number = number / 10;
	} 
	printf("The sum is %d\n",sum);
	return 0;
}
