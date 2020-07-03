/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

 * File Name : calcarea.c

 * Purpose : Calculate the area and circumference

 * Creation Date : 02-07-2020

 * Last Modified : Fri Jul  3 13:16:09 2020

 * Created By :  Shibe Serakalala

 _._._._._._._._._._._._._._._._._._._._._.*/
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	float area;
	float perimeter;
	float circumference;
	float length;
	float breadth;
	float area2;
	float radius;
	printf("Enter the length of a rectangle: ");
	scanf("%f",&length);
	printf("Enter the breadth of a rectangle: ");
	scanf("%f",&breadth);
	area = length * breadth;
        perimeter = 2 * (breadth + length);
        printf("The area of a rectangle is %.1f and perimeter of the rectangle is %.1f\n",area,perimeter);
	printf("Enter the radius of a circle :");
	scanf("%f",&radius);
	circumference = 2 * 3.14159 * radius;
	area2 = 3.14159 * radius * radius; 
	printf("The area of the circle is %.1f and the circumference is %.1f\n",area2,circumference);
	return (0);
}
