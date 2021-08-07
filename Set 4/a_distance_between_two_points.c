//set 4 a) write a c program to find distance between two points
#include<stdio.h>
#include<math.h>
void main()
{
	float x1, x2, y1, y2, distance;
	printf("Enter the values of x1 and y1: ");
	scanf("%f %f",&x1, &y1);
	printf("Enter the values of x2 and y2: ");
	scanf("%f %f",&x2, &y2);
	distance=sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
	printf("Distance between two points is %f",distance);
}
