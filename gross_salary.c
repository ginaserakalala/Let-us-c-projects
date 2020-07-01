/* *********************************************** */
/* Author : Shibe Serakalala                       */
/* project name : Calculate a user's gross salary  */
/* Date : 30 June 2020                             */

/* **********************************************  */

#include <stdio.h>
#include <unistd.h>

int main(void)
{

	float basic_salary;
	float gross_salary;
	float dearness_allowance;
	float house_rent;

	printf("Enter your basic salary: ");
	scanf("%f",&basic_salary);

	dearness_allowance = (40 * basic_salary) / 100;
	house_rent =(20 * basic_salary) / 100;
	gross_salary = basic_salary + dearness_allowance + house_rent;        
	printf("Your basic salary is: %.1f and your gross salary is %.1f\n",basic_salary,gross_salary);
	return 0;
}
