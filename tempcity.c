/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

 * File Name : tempcity.c

 * Purpose : Convert fahrenheit to centigrade

 * Creation Date : 02-07-2020

 * Last Modified : Thu Jul  2 13:07:58 2020

 * Created By :  Shibe Serakalala

 _._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	float fahrenheit;
	float centigrade;

	printf("Enter the temperature of a city in fahrenheit: ");
	scanf("%f",&fahrenheit);
	centigrade =  fahrenheit - 32 / 1.8000;
	printf("The temperature from fahrenheit to centigrade is  %.1f\n",centigrade);
	return (0);
}
