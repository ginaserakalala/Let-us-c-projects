/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

 * File Name : calcdistance.c

 * Purpose : Convert km to m,cm and inches in c 

 * Creation Date : 01-07-2020

 * Last Modified : Thu Jul  2 10:08:31 2020

 * Created By : Shibe Serakalala 

 _._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	float km;
	float cm;
	float inches;
	float meter;
	float feet;

	printf("Enter the distance between two cities in kilometer: ");
	scanf("%f", &km);

	meter = km * 1000;
	cm = km * 100000;
	inches = km * 39370;
	feet = km * 3280.8;

	printf("Distance in meters is: %.1f\nDistance in centimeter: %.1f\nDistance in inches: %.1f\nDistance in feet : %.1f\n", meter,cm,inches,feet);
	return (0);
}
